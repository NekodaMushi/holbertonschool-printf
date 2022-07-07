#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>


typedef struct print
{
	char c;
	int (*f)(va_list);
} check_st;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);


#endif
