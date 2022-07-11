#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_char - prints a char
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
 *print_string - prints a string
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

/**
 *print_percent - print the % sign
 *@list: list to roll along
 *Return: return '%'
 */

int print_percent(va_list list __attribute__((unused)))
{
	return (_putchar('%'));
}

