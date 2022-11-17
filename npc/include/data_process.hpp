#ifndef DATA_PROCESS
#define DATA_PROCESS
#include "assert.h"
uint32_t be_data_read(uint8_t data_be,uint8_t* data_before)
{
    uint8_t data_back[4];
    int first_flag=0;
    int cnt_flag=0;
    *(uint32_t*) data_back =0;
    for(int i=0;i<4;i++)
    {
        assert((data_be ==5 )| (data_be == 9)| (data_be == 10));
        if(data_be %2 ==1 &&first_flag ==0)
        {
            first_flag =1;
            cnt_flag =i;
            data_back[i] = data_before[i];
        }
        else if(data_be %2 ==1 &&first_flag ==1)
        {
            data_back[i] = data_before[i];
        }
        data_be = data_be >>1;
    }
  //  
	*(uint32_t*) data_back = (*(uint32_t*) data_back) >>(8*cnt_flag);
    return *(uint32_t*)data_back;
}
void be_data_process_write(uint8_t data_be,uint8_t* data_before,uint32_t data_write)
{
    uint8_t data_back[4];
    for(int i=0;i<4;i++)
    {
        if(data_be%2 == 1)
        {
            data_back[i] = (uint8_t)(data_write>>(i*8));
        }
        else{
            data_back[i] = data_before[i];
        }
        data_be = data_be >>1;
    }
    *(uint32_t* )data_before = *(uint32_t*) data_back;
}
#endif