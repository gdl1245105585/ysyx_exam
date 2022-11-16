#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int event_fd = -1;
FILE *fp_event;
uint32_t NDL_GetTicks() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_usec / 1000;
}

int NDL_PollEvent(char* buf, int len) {
   return read(event_fd,buf,len);
    
    
    // assert(buf);
    // assert(fp_event);

    // return fread(buf,len,1,fp_event);
    
    //return read(event_fd, buf, len);
}

void NDL_OpenCanvas(int* w, int* h) {
    //printf("in 3\n");
    // int fd = open("/proc/dispinfo", 0, 0);
    // char buf[8];
    // read(fd, buf, sizeof(buf));


    FILE *fp = fopen("/proc/dispinfo","r+");
    assert(fp);
    char buf[8];
    fread(buf,8,1,fp);
    memcpy(&screen_w, buf, sizeof(screen_w));
    memcpy(&screen_h, buf + 4, sizeof(screen_h));
    printf("NDL_OpenCanvas\n");
    if(*w == 0 && *h == 0){
        *w = screen_w; *h = screen_h;
    }

    if (getenv("NWM_APP")) {
        int fbctl = 4;
        fbdev = 5;
        screen_w = *w;
        screen_h = *h;
        char buf[64];
        int len = sprintf(buf, "%d %d", screen_w, screen_h);
        // let NWM resize the window and create the frame buffer
        write(fbctl, buf, len);
        while (1) {
            // 3 = evtdev
            int nread = read(3, buf, sizeof(buf) - 1);
            if (nread <= 0) continue;
            buf[nread] = '\0';
            if (strcmp(buf, "mmap ok") == 0) break;
        }
        close(fbctl);
    }
    //printf("out 3\n");

}

struct AM_FB {
    int x;
    int y;
    uint32_t* px;
    int w;
    int h;
};

void NDL_DrawRect(uint32_t* pixels, int x, int y, int w, int h) {
    //printf("in NDL_DrawRect\n");
    
    struct AM_FB req = {.px = pixels, .x = x+40, .y = y+40, .w = w, .h =h};
    write(fbdev,&req,sizeof(req));
    // fs_write(fbdev, &req, sizeof(req));
    close(fbdev);
}

void NDL_OpenAudio(int freq, int channels, int samples) {}

void NDL_CloseAudio() {}

int NDL_PlayAudio(void* buf, int len) {
    return 0;
}

int NDL_QueryAudio() {
    return 0;
}

int NDL_Init(uint32_t flags) {
    if (getenv("NWM_APP")) {
        evtdev = 3;
    }
    fp_event = fopen("/dev/events","r+");
    event_fd = open("/dev/events", 0, 0);
    fbdev = open("/dev/fb",0,0);
    // fbdev = open("/dev/fb", 0, 0);
    return 0;
}

void NDL_Quit() {
    // close(event_fd);
    // close(fbdev);
}
