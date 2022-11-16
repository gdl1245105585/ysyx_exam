#ifndef TIME_HPP
#define TIME_HPP
#include <sys/time.h>

uint64_t boot_time;
int flag=0;


uint64_t get_time()
{
    struct timeval now;
    gettimeofday(&now, NULL);
    us = now.tv_sec * 1000000 + now.tv_usec/ 1000;
    return us;
} 
uint64_t get_time_real()
{
    if(boot_time ==0)
    {
        boot_time = get_time();
    }
    uint64_t time = get_time();
    return time-boot_time;
}

#endif