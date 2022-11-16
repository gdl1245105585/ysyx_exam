#include <common.h>
#include "syscall.h"

size_t sys_write(int fd,char *buf,size_t  count)
{
    return fs_write(fd,buf,count);
}

size_t get_time()
{
  AM_TIMER_UPTIME_T _timer = io_read(AM_TIMER_UPTIME);
  return _timer.us;
}
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    // case SYS_write:printf("syscall write  "); printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]);c->GPRx = sys_write((int)a[1],(char*)a[2],(size_t)a[3]); printf("parameter back :%x \n ",c->GPRx);break;
    // case SYS_yield :printf("syscall yield  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]);yield(); c->GPRx =0; printf("parameter back :%x  \n ",c->GPRx);break;
    // case SYS_exit :printf("syscall exit  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]);halt(a[1]); c->GPRx =0;  printf("parameter back :%x  \n ",c->GPRx);break;
    // case SYS_brk : printf("syscall brk  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]);c->GPRx =0; printf("parameter back :%x   \n",c->GPRx);break;
    // case SYS_open :printf("syscall open  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]); c->GPRx=fs_open((char *)a[1]);printf("parameter back :%x  \n ",c->GPRx);break;
    //case SYS_read :printf("syscall read  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]); c->GPRx=fs_read((int)a[1],(void*) a[2],a[3]);printf("parameter back :%x  \n ",c->GPRx);break;
    // case SYS_close :printf("syscall close  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  ",a[2]);printf("parameter 3 :%x  ",a[3]); c->GPRx=fs_close(a[1]);printf("parameter back :%x  \n ",c->GPRx);break;
    // case SYS_lseek :printf("syscall lseek  ");printf("parameter 1 :%x  ",a[1]);printf("parameter 2 :%x  " ,a[2]);printf("parameter 3 :%x  ",a[3]);c->GPRx=fs_lseek(a[1],a[2],a[3]);printf("parameter back :%x  \n ",c->GPRx);break;
    // case SYS_gettimeofday: c->GPRx = get_time(); break;
    case SYS_write:c->GPRx = sys_write((int)a[1],(char*)a[2],(size_t)a[3]);break;
    case SYS_yield :yield(); c->GPRx =0; break;
    case SYS_exit :halt(a[1]); c->GPRx =0; break;
    case SYS_brk : c->GPRx =0; break;
    case SYS_open : c->GPRx=fs_open((char *)a[1]);break;
    case SYS_read : c->GPRx=fs_read((int)a[1],(void*) a[2],a[3]);break;
    case SYS_close : c->GPRx=fs_close(a[1]);break;
    case SYS_lseek :c->GPRx=fs_lseek(a[1],a[2],a[3]);break;
    case SYS_gettimeofday: c->GPRx = get_time(); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}