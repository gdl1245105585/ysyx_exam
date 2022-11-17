#include <proc.h>
#include <fs.h>

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len) ;
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB, FD_EVENTS, FB_DISPINFO};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here write");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here read");
  return 0;
}





/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_FB]       = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FD_EVENTS]   = {"/dev/events", 0, 0, events_read, invalid_write},
  [FB_DISPINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},

#include "files.h"
};

void init_fs() {
  // AM_GPU_CONFIG_T _config = io_read(AM_GPU_CONFIG);
  // file_table[FD_FB].size = _config.height * _config.width * 4;
  AM_GPU_CONFIG_T _config = io_read(AM_GPU_CONFIG);
  assert(strcmp(file_table[FD_FB].name, "/dev/fb") == 0);
  file_table[FD_FB].size = _config.height * _config.width * 4 + 4*sizeof(int);
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname)
{
  //asm volatile ("fence.i");
  printf("\n open file %s\n",pathname);
  for(int i=0;i<66;i++)
  {
    if(strcmp(file_table[i].name,pathname) ==0)
    {
      file_table[i].open_offset =0;
      return i;
    }
  }
 
  printf("invalid file is %s",pathname);
  assert(0);
  return 0;
}

size_t fs_read(int fd, void *buf, size_t len)
{
  if(fd <6)
  {
    return (*file_table[fd].read)(buf,0,len);
  }

  size_t left = file_table[fd].size - file_table[fd].open_offset ;
if( left < len )
  {
    ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,left);
    file_table[fd].open_offset += left ;
    return left;
  }
  else
  {
    ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len); 
    file_table[fd].open_offset += len ;
    return len;
  }
   
}

size_t fs_write(int fd, const void *buf, size_t len)
{
  if(fd <6 )
  {
    return (*file_table[fd].write)(buf,0,len);
  }
  size_t left = file_table[fd].size - file_table[fd].open_offset ;
  if(file_table[fd].size < len)
  {
    panic("write outbound");
  }
  else if( left < len )
  {
    ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,left);
    file_table[fd].open_offset += left ;
    return left;
  }
  else
  {
    ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len); 
    file_table[fd].open_offset += len ;
    return len;
  }
}
size_t fs_lseek(int fd, size_t offset, int whence)
{
  if(whence == SEEK_SET)
    file_table[fd].open_offset = offset;
  else if(whence == SEEK_CUR)
    file_table[fd].open_offset += offset;
  else if(whence == SEEK_END)
    file_table[fd].open_offset = file_table[fd].size + offset;
  else
    assert(0);
  return file_table[fd].open_offset;
}
int fs_close(int fd)
{
  file_table[fd].open_offset =  0;
  return 0;
}