#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *check - check for format specifiers
 *@format: the format to check
 *Return: the format found
 */

int (*check_type(const char *format, ...))(va_list)
{
	int i;
	check_st pick[] = {
		{'c', print_char},
		{'s', print_string},
		{0, NULL},
	};

	for (i = 0; pick[i].c != 0; i++)
	{
		if (pick[i].c == *format)
		{
			break;
		}
	}
	return (pick[i].f);
}
/**
 * _printf - print whatever
 *@format: the format to be printed
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) != '\0')
			{
				f = check_type((format + i + 1));
			}
			if (f != NULL)
			{
				count += f(list);
			}

			else
			{
				_putchar(*(format + i));
				count++;
			}
		}
		else
		{
			_putchar(*(format + i));
			count++;
		}

	}
	va_end(list);
	return (count);
}
