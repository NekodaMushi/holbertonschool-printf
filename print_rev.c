#include "main.h"
#include <stdarg.h>

/*
 * print_rev - prints a given string in reverse
 * @list: the string given in argument
 * Return: lenght of reversed string
 */

int print_rev(va_list list)
{
	int i = 0, j;
	char *str = va_arg(list, char *);

	if (!str)
		str = "(null)";
	while (str[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);

	return (i);
}
