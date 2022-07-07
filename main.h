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

int (*check_type(const char *format, ...))(va_list);

/*Functions created before*/
int _putchar(char c);

/*Functions print*/
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg); /* Has to be done*/
int print_binary(va_list arg);

/* Functions used by functions print */
void get_binary(int n);
int binary_lengh(int n);

#endif
