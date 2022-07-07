#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_c - prints a char
 * @c: char to print
 * Return: 1 for stdout
 */

int print_char(va_list c)
{
	char ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}

/**
 *print_s - prints a string
 *@s: string to print
 *Return: the number of char printed
 */
int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char*);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}


