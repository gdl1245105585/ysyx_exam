#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t cnt =0; 
  while ((*s)!= '\0')
{
	cnt = cnt +1;
	s ++;
}
return cnt;
}

char *strcpy(char *dst, const char *src) {
    char *p=NULL;
    if(dst == NULL || src == NULL)
    {
        return NULL;
    }
    p = dst;
    while((*dst++ = *src ++) != '\0');
    return p;
}

char *strncpy(char *dst, const char *src, size_t n) {
	char *tmp = dst;

   while (n) {
        if ((*tmp = *src) != 0)
            src++;
        tmp++;
        n--;
    }
    return dst;

}

char *strcat(char *dst, const char *src) {
    char *temp = dst;
    while (*temp != '\0')
        temp++;
    while ((*temp++ = *src++) != '\0');

    return dst;
}

int strcmp(const char *s1, const char *s2) {
	int ret=0;
      while( !(ret = *(unsigned char*)s1 - *(unsigned char*)s2 ) && *s1 )
      {
          s1++;
          s2++;
      }
      if(ret < 0)
         return -1;
     else if(ret > 0) 
         return 1;
     return 0;   
}

int strncmp(const char *s1, const char *s2, size_t n) {
    if(!n)return 0;
 
    while(--n && *s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
 
    return *s1 - *s2;
}

void *memset(void *s, int c, size_t n) {
	if (s == NULL || n < 0)
	{
		return NULL;
	}
	char *pdest = (char *)s;
	while (n-->0)
	{
		*pdest++ = c;
	}
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {

    assert(dst != NULL);
    assert(src != NULL);
    void* rest = dst;
    // void* 不能直接解引用，那么如何复制呢？
 
    if (dst < src) 

    {

    	while (n--)
    	{
    	    *(char*)dst = *(char*)src;


    	    dst++;
    	    src++;
    	}
    }
    else 
    {

    	while (n--) 
    	{
    	    *((char*)dst + n) = *((char*)src + n);
    	}

    }
    return rest;
}

void *memcpy(void *out, const void *in, size_t n) {
    
    while (n--)
        *(char*)out++ = *(char*)in++;
        
    return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1!=NULL && s2!=NULL && n>0);
        const char *pdest=(char*)s1;
        const char *psrc=(char*)s2;
        while(*pdest == *psrc && --n>0)
        {
            pdest++;
            psrc++;
        }
        int a=*pdest-*psrc;
        if(a>0){return 1;}
        else if(a<0){return -1;}
        else{return 0;}
        return a;

}

#endif
