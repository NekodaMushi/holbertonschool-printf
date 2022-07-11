#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_rev - Reverse a string
 * @list: arg used
 * Return: Count
 */

int print_rev(va_list list)
{
	int len = 0, i, count;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str--;

	for (i = len; i > 0; i--)
	{
		_putchar(*str);
		str--;
	}
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
