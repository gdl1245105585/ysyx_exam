#include "stdio.h"
#include "string.h"
#include "assert.h"
#include "stdlib.h"
#include <elf.h>
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
# define Elf_Shdr Elf64_Shdr
# define Elf_Sym  Elf64_Sym


static int sym_index;
static int str_index;
int main()
{
    FILE *fp = fopen("pal-riscv64","r");
    assert(fp);
    Elf_Ehdr Ehdr;
    fread(&Ehdr,sizeof(Elf_Ehdr),1,fp);
    Elf_Shdr Shdr[Ehdr.e_shnum];
    printf("%x\n",Ehdr.e_shnum);

//get the string section
    fseek(fp,Ehdr.e_shoff+ Ehdr.e_shstrndx*Ehdr.e_shentsize ,0);
    fread(&Shdr[Ehdr.e_shstrndx],sizeof(Shdr),1,fp); 

//get the symtab index
    
    for(int i=0;i<Ehdr.e_shnum;i++)
    {
        fseek(fp,Ehdr.e_shoff+i*Ehdr.e_shentsize ,0);
        fread(&Shdr[i],sizeof(Shdr),1,fp); 
        fseek(fp,Shdr[Ehdr.e_shstrndx].sh_offset + Shdr[i].sh_name,0);
        char a[100] ;
        fread(a,100,1,fp);
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
    
    int sym_num = Shdr[sym_index].sh_size/sizeof(Elf_Sym);
    Elf_Sym Sym[sym_num];
    for(int i=0;i<sym_num;i++)
    {
        fseek(fp,Shdr[sym_index].sh_offset+sizeof(Elf_Sym)*i,0);
        fread(&Sym[i],sizeof(Elf_Sym),1,fp);
        if((Sym[i].st_info == STT_FUNC)|(Sym[i].st_info == STT_FUNC+16))
        {
            char name[100];
            fseek(fp,Shdr[str_index].sh_offset + Sym[i].st_name,0);
            fread(name,100,1,fp);
            printf("%s at address between %lx and %lx\n",name,Sym[i].st_value,Sym[i].st_value+Sym[i].st_size);
        }
    }

     

return 0;
}
