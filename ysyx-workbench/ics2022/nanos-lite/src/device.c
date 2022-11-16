#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  size_t i =0;
  char * buf_char = (char *)buf;
  for(i = 0;i<len;i++)
  {
    if(*(buf_char+i) == '\0')
    {
      break;
    }
    putch(*(buf_char+i));
  }
  return i;
}

size_t events_read(void *buf, size_t offset, size_t len) {
    //yield();
    AM_INPUT_KEYBRD_T t = io_read(AM_INPUT_KEYBRD);
    if (t.keycode == AM_KEY_NONE) return 0;
    int ret = 0;
    if (t.keydown) {
        ret = sprintf(buf, "kd %s\n", keyname[t.keycode]);
    } else {
        ret = sprintf(buf, "ku %s\n", keyname[t.keycode]);
    }
    return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
    AM_GPU_CONFIG_T t = io_read(AM_GPU_CONFIG);
    int width = t.width;
    int height = t.height;
    char* b = (char*)buf;
    memcpy(b, &width, sizeof(width));
    memcpy(b + 4, &height, sizeof(height));
    return 8;
}
struct AM_FB { 
    int x;
    int y;
    uint32_t* px;
    int w;
    int h;
};

size_t fb_write(const void *buf, size_t offset, size_t len) {
    MULTIPROGRAM_YIELD();
    struct AM_FB* req = (struct AM_FB*)buf;

    //printf("draw to am: %d\n",req->x);
    io_write(AM_GPU_FBDRAW, req->x,req->y,req->px,req->w,req->h,true);
    return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
