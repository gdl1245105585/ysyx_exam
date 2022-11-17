#include <proc.h>
#include <elf.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif






static uintptr_t loader(PCB *pcb, const char *filename) {
 
  Elf_Ehdr Ehdr;
  int fd = fs_open(filename);

  fs_read(fd, &Ehdr, sizeof(Ehdr));
  //assert(*(uint64_t *)Ehdr->e_ident == 0xBadC0de); 
  for(int i = 0; i < Ehdr.e_phnum; i++){
    Elf_Phdr Phdr;
    fs_lseek(fd,  Ehdr.e_phoff + i * Ehdr.e_phentsize, 0);
    fs_read(fd, &Phdr, sizeof(Phdr));
    if(Phdr.p_type == PT_LOAD){
      for(int _offset = 0; _offset < Phdr.p_filesz; _offset ++){
        uint8_t _data;
        fs_lseek(fd, Phdr.p_offset + _offset, 0);
        fs_read(fd, &_data, 1);
        *((uint8_t*)(Phdr.p_vaddr + _offset)) = _data;
      }
      for(int _offset = Phdr.p_filesz; _offset < Phdr.p_memsz; _offset ++){
        *((uint8_t*)(Phdr.p_vaddr + _offset)) = 0;
      }
    } 
  }
  
  return Ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

