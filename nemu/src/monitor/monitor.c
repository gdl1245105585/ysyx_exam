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

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {

}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("size :%lx\n\n",size);
  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
# define Elf_Shdr Elf64_Shdr
# define Elf_Sym  Elf64_Sym
# define elf_recordd_num 3000
struct ftrace_context{
  uint64_t addr;
  uint64_t len;
  char name[100];
};
struct ftrace_context ftrace_context[elf_recordd_num];
static int sym_index;
static int str_index;
FILE * ftrace_fp;
void init_ftrace()
{
    char elf_file[200]; 
    strcpy(elf_file,img_file);
    
    elf_file[strlen(img_file)-3] = 'e';
    elf_file[strlen(img_file)-2] = 'l';
    elf_file[strlen(img_file)-1] = 'f';
    //printf("%s\n",elf_file);
    int unused;
    FILE *fp_elf = fopen(elf_file,"r");
    ftrace_fp = fopen("ftrace.txt","w+");
    assert(fp_elf);
    assert(ftrace_fp);
    Elf_Ehdr Ehdr;
    unused = fread(&Ehdr,sizeof(Elf_Ehdr),1,fp_elf);
    Elf_Shdr Shdr[Ehdr.e_shnum];
    printf("%x\n",Ehdr.e_shnum);

//get the string section
    fseek(fp_elf,Ehdr.e_shoff+ Ehdr.e_shstrndx*Ehdr.e_shentsize ,0);
    unused = fread(&Shdr[Ehdr.e_shstrndx],sizeof(Shdr),1,fp_elf); 

//get the symtab index
    
    for(int i=0;i<Ehdr.e_shnum;i++)
    {
        fseek(fp_elf,Ehdr.e_shoff+i*Ehdr.e_shentsize ,0);
        unused = fread(&Shdr[i],sizeof(Shdr),1,fp_elf); 
        fseek(fp_elf,Shdr[Ehdr.e_shstrndx].sh_offset + Shdr[i].sh_name,0);
        char a[100] ;
        unused = fread(a,100,1,fp_elf);
        if(Shdr[i].sh_type == SHT_SYMTAB)
        {
            sym_index = i;
        }
        else if(Shdr[i].sh_type == SHT_STRTAB && i!= Ehdr.e_shstrndx)
        {
            str_index = i;
        }
        printf("there is no symbol table");
    }
    
//analysis symtab
    int loged_index=0;
    int sym_num = Shdr[sym_index].sh_size/sizeof(Elf_Sym);
    if(sym_num >elf_recordd_num )
    {
        printf("\nftrace overflow\n\n");
        printf("record :%d   my record:%d\n",sym_num,elf_recordd_num);
        assert(0);
    }
      
    Elf_Sym Sym[sym_num];
    for(int i=0;i<sym_num;i++)
    {
        
        fseek(fp_elf,Shdr[sym_index].sh_offset+sizeof(Elf_Sym)*i,0);
        unused = fread(&Sym[i],sizeof(Elf_Sym),1,fp_elf);
        if((Sym[i].st_info == STT_FUNC)|(Sym[i].st_info == STT_FUNC+16))
        {

          ftrace_context[loged_index].addr = Sym[i].st_value;
          ftrace_context[loged_index].len = Sym[i].st_size;
          
          char name[100];
          fseek(fp_elf,Shdr[str_index].sh_offset + Sym[i].st_name,0);
          unused = fread(name,100,1,fp_elf);
          //printf("%s at address between %lx and %lx\n",name,Sym[i].st_value,Sym[i].st_value+Sym[i].st_size);
          strcpy(ftrace_context[loged_index].name,name);
          loged_index = loged_index +1;
        }
    }
    if(unused){

    }
}
int call_time;
int ret_time;
void find_elf_sym_ret(uint64_t pc,uint64_t dnpc,uint64_t imm)
{
  assert(ftrace_fp);
  //fprintf(ftrace_fp,"pc :%lx dnpc:%lx  imm:%lx\n",pc,dnpc,imm);
  if(imm == 0 )
  {
    for (int j=0;j<elf_recordd_num;j++)
    {
      if(dnpc >=ftrace_context[j].addr && dnpc <ftrace_context[j].addr + ftrace_context[j].len)
      {
        for(int i=0;i<elf_recordd_num;i++)
        {
          if(pc >= ftrace_context[i].addr && pc< ftrace_context[i].len + ftrace_context[i].addr)
          {
            for(int k=0;k<call_time-ret_time;k++)
            {
              fprintf(ftrace_fp,"  ");
            }
            fprintf(ftrace_fp,"%s",ftrace_context[i].name);
            break;
          }
        }
        fprintf(ftrace_fp," ret to %s\n",ftrace_context[j].name);
        ret_time ++;
        break;
      }
    }
  }
  else
  {
    for(int i=0;i<elf_recordd_num;i++)
    {
      if(dnpc == ftrace_context[i].addr )
      {
        for (int j=0;j<elf_recordd_num;j++)
        {
          if(pc >=ftrace_context[j].addr && pc <ftrace_context[j].addr+ftrace_context[j].len)
          {
            for(int k=0;k<call_time-ret_time;k++)
            {
              fprintf(ftrace_fp,"  ");
            }
            fprintf(ftrace_fp,"%s",ftrace_context[j].name);
            break;
          }
        }
        fprintf(ftrace_fp," call %s\n",ftrace_context[i].name);
        call_time ++;
        break;
      }
    }
  }  
  //printf("%d\n",call_time-ret_time); 
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  init_ftrace();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
