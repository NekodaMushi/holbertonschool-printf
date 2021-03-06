#ifndef _HOLBERTON_
#define _HOLBERTON_
#include <stdarg.h>

typedef struct print
{
	char c;
	int (*f)(va_list);
} check_st;

/*Function created before*/
int _putchar(char c);

/*Functions created for this project*/
int _printf(const char *format, ...);

/*And Used by _printf function*/
int print_char(va_list c);
int print_string(va_list s);
int print_percent(va_list list);
int print_binary(va_list arg);
int print_int(va_list arg);
int rot13_convert(va_list list);
int print_unsigned_int(va_list arg);
int print_octal(va_list arg);
int print_S(va_list list);
int print_2hex(char c);
int pick_x(va_list list);
int pick_X(va_list list);
int print_hexa(unsigned int num, int up_low);
int print_rev(va_list list);

#endif
