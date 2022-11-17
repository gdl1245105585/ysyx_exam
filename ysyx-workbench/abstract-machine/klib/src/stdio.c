#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
void printch(const char ch)   //输出字符
{  
    putch(ch);  
}  
 
 
void printint(const int dec)     //输出整型数
{  
    if(dec == 0)  
    {  
        return;  
    }  
    printint(dec / 10);  
    putch((char)(dec % 10 + '0'));  
}  
 
void printhex(const int dec,int flag)     //输出整型数
{  
	unsigned int doc_abs = (unsigned int) dec;
    if(doc_abs == 0 && flag == 1)  
    {  
        return;  
    }  
	else if (doc_abs == 0)
	{
		putch('0');
		return;
	}
    printhex(doc_abs / 16,1);  
	if(doc_abs % 16 >= 0 && doc_abs % 16 <= 9)
    putch((char)(doc_abs % 16 + '0'));  
	else if(doc_abs % 16 >=10)
	putch((char)( doc_abs % 16 -10 + 'a'));
}  
void printstr(const char *ptr)        //输出字符串
{  
    while(*ptr)  
    {  
        putch(*ptr);  
        ptr++;  
    }  
}  
 int _i2a(int num, char buf[32], int radix)
{
	static const char s[] = "0123456789abcdef";
	int n = num, R = radix;
	char *dst = buf;
	if (n < 0) { *dst++ = '-'; n = -n; }
	if (n < 10)
	{
		*dst++ = s[n]; *dst = 0;
	}else
	{
		char tmp[32], *p = tmp;
		while (n) { *p++ = s[n % R]; n /= R; }
		while (--p != tmp) *dst++ = *p;
		*dst++ = *tmp; *dst = 0;
	}
	return dst-buf;
} 
  
int _itoa(int num, char buf[32])
{
	return _i2a(num, buf, 10);
}

/************************************************************************
* @brief 整数转字符串
* @param[in] num 整数
* @param[out] buf 字符串
* @param[in] radix 进位制整数
* @return 返回字符串长度
************************************************************************/

int printf(const char *fmt, ...) {
  va_list ap;  
    va_start(ap,fmt);     //将ap指向第一个实际参数的地址
    while(*fmt)  
    {  
        if(*fmt != '%')  
        {  
            putch(*fmt);  
            fmt++;  
        }  
        else  
        {  
            fmt++;  
            switch(*fmt)  
            {  
                case 'c':  
                {  
                    char valch = va_arg(ap,int);  //记录当前实践参数所在地址
                    printch(valch);  
                    fmt++;  
                    break;  
                }  
                case 'd':  
                {  
                    int valint = va_arg(ap,int);  
                    printint(valint);  
                    fmt++;  
                    break;  
                }  
                case 's':  
                {  
                    char *valstr = va_arg(ap,char *);  
                    printstr(valstr);  
                    fmt++;  
                    break;  
                }  
				case 'x':  
                {  
                    int valhex = va_arg(ap,int);  
                    printhex(valhex,0);  
                    fmt++;  
                    break;  
                }  
                default:  
                {  
                    printch(*fmt);  
                    fmt++;  
                }  
            }    
        }  
    }
    va_end(ap); 
return 1; 
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	char *s = out;
	const char *f = fmt;
	va_list ap, another;
	va_start(ap, fmt);
	va_copy(another, ap);
	while (*f)
	{
		int n = 1;
		if ('%' != *f)
		{
			*s = *f;
		}else{
			++f;
			switch (*f)
			{
			case 's':// 字符串
				{
					const char *p = va_arg(ap, char*);
					n = strlen(p);
					memcpy(s, p, n);
				}
				break;

			case 'd': case 'u':// 整数
				{
					char buf[32];
					n = _itoa(va_arg(ap, int), buf);
					memcpy(s, buf, n);
				}
				break;

			case 'c':// 字符
				{
					*s = va_arg(ap, int);
				}
				break;

			case '%':// 百分号
				{
					*s = '%';
				}
				break;

			}
		}
		++f;
		s += n;
	}
	*s = 0;
	va_end(ap);
	return s-out;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
