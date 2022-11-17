#include <verilated.h>          // Defines common routines
#include <iostream>             // Need std::cout
#include "Vmy_cpu.h"               // From Verilating "top.v"
#include <stdio.h>
#include "assert.h"
#include <dlfcn.h>
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "sim.h"

uint64_t us;
typedef uint64_t vaddr_t ;
#define ram_debug 0
#define sdb 0
#define wave_upper 0x83036714
#define wave_lower 0x0 
#define wave_opt 0
#define difftest 0
#define vga 1
#define vga_debug 0
#define icache_debug 0
#include <SDL2/SDL.h>
#include "time.hpp"


static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
void * npc_vmem;
uint8_t a104[4];
// uint32_t a104;
uint8_t a100[4];
typedef void (*FUNPTR1)(FILE* file,uint64_t *ram_npc);
typedef void (*FUNPTR2)(vaddr_t np,int valid);
typedef uint64_t (*FUNPTR3)(uint32_t buf,int len);
typedef void (*FUNPTR4)(uint32_t buf,uint64_t data,int len,uint32_t pc);
typedef void (*FUNPTR5)(FILE* file);
uint64_t *cpu_gpr_npc_ref = NULL;
uint64_t *cpu_gpr_npc_dut = NULL;
uint64_t *ram_dut =NULL;
Vmy_cpu *top;                      // Instantiation of model
uint64_t main_time = 0;       // Current simulation time
#if ram_debug
extern "C" void set_ram_ptr(const svOpenArrayHandle r) {
  ram_dut = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
#endif
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr_npc_dut = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_vmem_ptr(const svOpenArrayHandle r) {
  npc_vmem = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void gpr_connect()
{
  memcpy(cpu_gpr_npc_ref,cpu_gpr_npc_dut,256);
}

double sc_time_stamp() {        // Called by $time in Verilog
    return main_time;           // converts to double, to match
}

FUNPTR1 fun_dlsym1(void* handle, const char* name) {
    union {
        void* ptr;
        FUNPTR1 fptr;
    } u;
    u.ptr = dlsym(handle, name);
    return u.fptr;
}


FUNPTR2 fun_dlsym2(void* handle, const char* name) {
    union {
        void* ptr;
        FUNPTR2 fptr;
    } u;
    u.ptr = dlsym(handle, name);
    return u.fptr;
}

FUNPTR3 fun_dlsym3(void* handle, const char* name) {
    union {
        void* ptr;
        FUNPTR3 fptr;
    } u;
    u.ptr = dlsym(handle, name);
    return u.fptr;
}

FUNPTR4 fun_dlsym4(void* handle, const char* name) {
    union {
        void* ptr;
        FUNPTR4 fptr;
    } u;
    u.ptr = dlsym(handle, name);
    return u.fptr;
}

FUNPTR5 fun_dlsym5(void* handle, const char* name) {
    union {
        void* ptr;
        FUNPTR5 fptr;
    } u;
    u.ptr = dlsym(handle, name);
    return u.fptr;
}
uint64_t mtime = 0;
uint64_t mtimecmp = 0;
#if icache_debug
    uint32_t inst_addr = 0;
    uint32_t inst_ref = 0;
    int skip = 1;
#endif
void npc_vga_update_screen(void);
void npc_init_srceen();
void npc_update_screen();


int main(int argc, char** argv) {
#if wave_opt
  assert(wave_lower <= wave_upper  );
  #endif
  void (*difftest_init_npc)(FILE* file,uint64_t *ram_npc) = NULL;
  void (*npc_ram_write)(uint32_t buf,uint64_t data,int len,uint32_t pc)= NULL;
  uint64_t (*npc_ram_read)(uint32_t buf,int len) = NULL;
  #if difftest
  void (*difftest_step_npc)(vaddr_t npc,int valid) = NULL; 
  #endif

  #if ram_debug ==0
  void (*difftest_init_npc_ram_debug)(FILE* file) = NULL; 
  #endif
  void *handle;
  handle = dlopen("./bin/riscv64-nemu-interpreter-so", RTLD_LAZY);
  assert(handle);

  difftest_init_npc = fun_dlsym1(handle,"difftest_init_npc");
  printf("pos 1\n");
  #if difftest
    cpu_gpr_npc_ref = (uint64_t *)dlsym(handle,"cpu_gpr_npc");
  assert(cpu_gpr_npc_ref);
  difftest_step_npc = fun_dlsym2(handle,"difftest_step_npc");
  assert(difftest_init_npc);
  assert(difftest_step_npc);
  #endif
  npc_ram_read = fun_dlsym3(handle,"npc_ram_read");
  npc_ram_write = fun_dlsym4(handle,"npc_ram_write");
  assert(npc_ram_read);
  assert(npc_ram_write);
  #if ram_debug ==0
  difftest_init_npc_ram_debug = fun_dlsym5(handle,"difftest_init_npc_ram_debug");
  #endif
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

    top = new Vmy_cpu{contextp};             // Create model
    VerilatedVcdC* tfp = new VerilatedVcdC;
    #if wave_opt==1
    contextp->traceEverOn(true); //打开追踪功能
    top->trace(tfp, 0); //
    tfp->open("wave.vcd"); //设置输出的文件wave.vcd
    #endif
    uint64_t data_read,data_write;
    int ram_len;
    vaddr_t offset,addr_read;
    uint32_t ext_addr;
    uint64_t ext_write_data;
    uint64_t mmio_write_data;
    // strcat(pwd,argv[1]);
    printf("%s",argv[1]);
    FILE   *fp = fopen(argv[1],"r");
    #if vga_debug
    FILE *vga_debug_file = fopen("/debug_file/vga_debug.txt","r");
    #endif
    top->rst = 1;           // Set some inputs
    #if ram_debug
    top->eval();
    main_time++;
    difftest_init_npc(fp,ram_dut);
    #else
    difftest_init_npc_ram_debug(fp);
    
    axi4_mem<32,64,4> mem(4096l*1024*1024);
    mem.load_binary(argv[1],0x80000000);
    
    axi4_ptr<32,64,4> mem_ptr;
         mem_ptr.awid=&(top->AWID);


    mem_ptr.awaddr=&(top->AWADDR);
    mem_ptr.awlen=&(top->AWLEN);
    mem_ptr.awsize=&(top->AWSIZE);
    mem_ptr.awburst=&(top->AWBURST);
    mem_ptr.awvalid=&(top->AWVALID);
    mem_ptr.awready=&(top->AWREADY);

    mem_ptr.wdata=&(top->WDATA);
    mem_ptr.wstrb=&(top->WSTRB);
    mem_ptr.wlast=&(top->WLAST);
    mem_ptr.wvalid=&(top->WVALID);
    mem_ptr.wready=&(top->WREADY);

    mem_ptr.bid=&(top->BID);
    mem_ptr.bresp=&(top->BRESP);
    mem_ptr.bvalid=&(top->BVALID);

    mem_ptr.bready=&(top->BREADY);

    mem_ptr.araddr=&(top->ARADDR);
    mem_ptr.arlen=&(top->ARLEN);
    mem_ptr.arsize=&(top->ARSIZE);
    mem_ptr.arburst=&(top->ARBURST);
    mem_ptr.arvalid=&(top->ARVALID);

    mem_ptr.arready=&(top->ARREADY);


    mem_ptr.rid=&(top->RID);
    mem_ptr.rdata=&(top->RDATA);
    mem_ptr.rresp=&(top->RRESP);
    mem_ptr.rlast=&(top->RLAST);
    mem_ptr.rvalid=&(top->RVALID);

    mem_ptr.rready=&(top->RREADY);
    mem_ptr.arid=&(top->ARID);


    assert(mem_ptr.check());
    axi4_ref<32,64,4> mem_ref(mem_ptr);
    axi4<32,64,4> mem_sig;
    axi4_ref<32,64,4> mem_sig_ref(mem_sig);
#endif
    int step =0;
    int step_real =0;
    #if vga
        npc_init_srceen();
        // npc_ram_write(0x20000100,(400 << 16) | 300,4,0x0);
       *(uint32_t*) a100 = (400 << 16) | 300;
    #endif
    
    int wave_flag =0;
    do{

#if vga
    if(main_time % 10000 == 50)
    {
        // int sync =npc_ram_read(0x20000104,1);
       // printf("%x\n",npc_ram_read(0x20000104,4));
       int sync = a104[0];
        // int sync = (uint8_t) a104;
        if(sync){     
            assert(npc_vmem)    ;
   //         int data;
            
            npc_update_screen();
            // for(int i=0;i<10;i++)
            // {
            //     //fgets(vga_debug_file,1,&data);
            //     printf("%d", *(uint32_t*)(npc_vmem+4*i));    
            // }
        }
        a104[0] =0;
        // npc_ram_write(0x20000104,0,1,0x0);
        // a104 = 0;
    }
#endif
    if((main_time % 10) == 9)
    {   
        //printf("real addr :%x, be is %x  \n",top->ext_ram_addr,top->ext_ram_be_n);
            mmio_write_data  = top->mmio_write_data;
            #if difftest==0
            if(top->mmio_rtc_high_en |top->mmio_rtc_low_en)
            {
                us = get_time_real();
            }
            #endif
            if(top->mmio_serial_en && top->mmio_wen!=0 )
            {
                printf("%c",(char)(mmio_write_data));
            }
            #if difftest==0
            else if(top->mmio_rtc_low_en && !top->mmio_wen)
            {
                top->mmio_rtc_low_data = (uint32_t)us;
            }
            else if(top->mmio_rtc_high_en && !top->mmio_wen)
            {
                //printf("%d\n",(uint32_t)(us>>32));
                top->mmio_rtc_high_data = (uint32_t)(us>>32);
            }
            #else
            else if(top->mmio_rtc_low_en && !top->mmio_wen)
            {
                top->mmio_rtc_low_data = npc_ram_read(0x20000048,1);
            }
            else if(top->mmio_rtc_high_en && !top->mmio_wen)
            {
                //printf("%d\n",(uint32_t)(us>>32));
                top->mmio_rtc_high_data = npc_ram_read(0x2000004c,1);
            }            
            #endif
            else if(top->mmio_vga_ctl_low_en&&  top->mmio_wen!=0)
            {
                // npc_ram_write(0x20000100,top->mmio_write_data,4,0x0);
                be_data_process_write((uint8_t)top->mmio_be_n,a100,(uint32_t)top->mmio_write_data) ;
            }
            else if(top->mmio_vga_ctl_low_en&&  top->mmio_wen == 0)
            {
                top->mmio_vga_ctl_low_data =  be_data_read((uint8_t)top->mmio_be_n,a100);
            }
            else if(top->mmio_vga_ctl_high_en&&  top->mmio_wen!=0)
            {
                be_data_process_write((uint8_t)(top->mmio_be_n>>4),a104,(uint32_t)top->mmio_write_data);
                // npc_ram_write(0x20000104,top->mmio_write_data,4,0x0);
                // a104[0] = top->mmio_write_data;;
            }
            else if(top->mmio_vga_ctl_high_en&&  top->mmio_wen == 0)
            {
                top->mmio_vga_ctl_high_data =  be_data_read((uint8_t)(top->mmio_be_n>>4),a104);
                // top->mmio_vga_ctl_high_data = npc_ram_read(0x20000104,4);
                // top->mmio_vga_ctl_high_data = *(uint32_t*)a104;
            }
      #if ram_debug ==0
        mem.beat(mem_sig_ref);
        mem_sig.update_output(mem_ref);
        #endif

    }      
      if (main_time > 9) {
          top->rst = 0;   // Deassert reset
      }
      #if ram_debug ==0
      if((main_time % 10) == 0)
      {
        mem_sig.update_input(mem_ref);
      }
      #endif
      if ((main_time % 10) == 1) {
          top->clk = 1;       // Toggle clock  
      }
      if ((main_time % 10) == 6) {
          top->clk = 0;
      }
      #if wave_opt==1
      if(top->inst_addr >wave_lower&& top->inst_addr <wave_upper)
        tfp->dump(contextp->time()); //dump wave
      #endif
      contextp->timeInc(1); //推动仿真时间
      top->eval();            // Evaluate model   only through eval will you get the num in regfile
    #if difftest == 1     
      gpr_connect();
      if(top->rst == 0 &&main_time % 10 == 4 )
      {
        // printf("src1 :%lx  ",top->Inst_Src1_forwarding);
        // printf("src2 :%lx  ",top->Inst_Src2_forwarding);
        // printf("inst_result_Select :%lx  ",top->inst_result_Select);
        // printf("IF_we :%lx  ",top->IF_we);
        // printf("mul_valid :%x ",top->mul_div_valid);
        // printf("mul_esult :%lx ",top->mul_div_result);
        // printf("addr :%x ",top->EX_addr);
        //  printf("final_esult :%lx ",top->EX_data);        
        // printf("npc : %lx valid :%d  we: %d addr :%x data:%x \n",top->debug_pc,top->valid,top->we,top->addr,top->data);
        difftest_step_npc(top->debug_pc,top->valid);
      }
    #endif
    main_time++;    
    #if sdb==1
    step_real --;
    if(step_real<0)
    {
        printf("input step:");
        scanf("%d",&step);
        step_real = step*10;
    }
    #endif
    }     while(!top->inst_ebreak) ;   // Time passes...
    #if wave_opt == 1
    tfp->close();
    #endif
    delete contextp;
      std::cout << "\npass" << std::endl;
      top->final();               // Done simulating
      //    // (Though this example doesn't get here)
      delete top;
}


void npc_init_srceen()
{
//   npc_vmem = malloc(400*300*sizeof(uint32_t));
//   memset(npc_vmem, 0, 400*300*sizeof(uint32_t));

  SDL_Window *window = NULL;
  char title[128] = "riscv64-npc";
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      800,
      600,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, 400, 300);
}


void npc_update_screen() {
  SDL_UpdateTexture(texture, NULL, npc_vmem, 400 * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
void connect(){

}



