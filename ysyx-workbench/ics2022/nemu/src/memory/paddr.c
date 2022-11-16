/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#define npc_debug 0
#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

uint64_t time_npc;
static uint32_t a100_data;
static uint32_t a104_data;
uint32_t* npc_vmem;

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}
word_t record_data =0;
paddr_t record_addr =0 ;
uint32_t serial_data;
word_t paddr_read(paddr_t addr, int len) {
  #if npc_debug
  
    if(addr == 0xa0000048)
    {
      return time_npc;
    }
    else if(addr == 0xa0000060)
    {
      return 0;
    }
    // else if(addr == 0xa00003f8)
    // {
    //   return serial_data;
    // }
    else if( addr == 0xa0000100)
    {
      return a100_data ;
    }
    else if( addr == 0xa0000104)
    {
      return a104_data;
    }
    else if(addr >= 0xa1000000 &&addr<= 0xa1000000+400*300*sizeof(uint32_t) )
    {
      printf("nemu :%x\n",addr);
      uint64_t data_out  = *(npc_vmem + (addr- 0xa1000000)/4);
      return data_out;
    }
    else if(addr == 0xa000004c)
    return time_npc>>32;
    
    #endif
  if (likely(in_pmem(addr)))
  { 
    return pmem_read(addr, len);
    }


  IFDEF(CONFIG_DEVICE,return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  #if npc_debug
  if( (addr == 0xa00003f8)|(addr == 0xa0000060 )|(addr == 0xa0000100 )|(addr == 0xa0000104) |((addr >= 0xa1000000) &&(addr<= 0xa1000000+sizeof(uint32_t)*400*300)) |(addr==0xa000004c))
    {
        return ;
    }
    if(addr == 0xa00003f8)
    {
      serial_data = (uint32_t)data;
    }
#endif

  if (likely(in_pmem(addr))) 
  { 
    pmem_write(addr, len, data);

  return;
  }
  IFDEF(CONFIG_DEVICE,mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
static uint64_t *data_ram;
void npc_ref_mem_cpy(uint64_t *ram_npc)
{
  data_ram = ram_npc ;
  memcpy(data_ram,pmem,0x8000000);

}
uint64_t cpu_gpr_npc[32];


uint64_t npc_ram_read(uint32_t buf,int len)
{
  if(buf < 0x30000000&&buf>=0x20000000)
  {
    if(buf == 0x20000048)
    {
      time_npc = get_time();
      return (uint32_t)time_npc;
      
    }
    else if((buf == 0x200003f8)|(buf == 0x20000060))
    {
      return 0;
    }
    else if( buf == 0x20000100)
    {
        return a100_data;
    }
    else if( buf == 0x20000104)
    {
        return a104_data ;
    }
    else if(buf >= 0x21000000 && buf<= 0x21000000+400*300*sizeof(uint32_t))
    {
      uint64_t data_out =  *(npc_vmem + (buf- 0x21000000)/4);
      return data_out;
    }
    else if(buf == 0x2000004c)
    {
      return time_npc>>32;
    }
    else
    {
      printf("out bound ptr points to%x\n",buf);
      assert(0);
    }
  }
    switch (len) {
    case 1: return *(uint8_t  *)(data_ram+(uint64_t)buf);
    case 2: return *(uint16_t *)(data_ram+(uint64_t)buf);
    case 4: return *(uint32_t *)(data_ram+(uint64_t)buf);
    case 8: return *(uint64_t *)(data_ram+(uint64_t)buf);
    default: return 0;
  }
}

void npc_ram_write(uint32_t buf,uint64_t data,int len,uint32_t pc)
{
  record_addr = buf;
  record_data = data;
  //printf("\nmem write :%x",buf);
    if( buf == 0x40000000) //put vmeme in
    {
      return ;
    }
    if(buf < 0x30000000&&buf>=0x20000000)
    {
      if(buf == 0x200003f8)
      {
          printf("%c",(char)data);
          return ;
      }
      else if( buf == 0x20000100)
      {
          a100_data = data;
          return ;
      }
      else if( buf == 0x20000104)
      {
        // printf("data :%x\n",a104_data);
        // printf("%x\n",pc);
          a104_data = data;
          return ;
      }
      else if(buf >= 0x21000000 && buf<=0x21000000+400*300*sizeof(uint32_t)) 
      {
        *(npc_vmem +(buf-0x21000000)/4 )= data;
        return ;
      }
      else if(buf == 0x2000004c)
      {
        return ;
      }
      printf("out bound ptr points to%x\n",buf);
      assert(0);
    }
    switch (len) {
    case 1: *(uint8_t  *)(data_ram+(uint64_t)buf) = data; return;
    case 2: *(uint16_t *)(data_ram+(uint64_t)buf) = data; return;
    case 4: *(uint32_t *)(data_ram+(uint64_t)buf) = data; return;
    case 8: *(uint64_t *)(data_ram+(uint64_t)buf) = data; return;
    default: return ;
  }
}
