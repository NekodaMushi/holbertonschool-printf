#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct search_type - struct type
 * @type: char's format
 * @f: function pointer
 *
 */

typedef struct check
{
	char *type;
	void (*f)(va_list);
} check_st;

/*Functions Prototype from this project:*/
int _printf(const char *format, ...);

/*Function created for this project*/
void check_type(const char *const format, ...);

/*Function created before*/
int _putchar(char c);

/*Function print*/
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg); /* Has to be done*/
int print_binary(va_list arg);


#endif
