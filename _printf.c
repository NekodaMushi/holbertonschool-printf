#include "main.h"

/**
 *check - check for format specifiers
 *@format: the format to check
 *Return: the format found
 */

int (*check_type(const char *format))(va_list)
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
			return (pick[i].f);
		}
	}
	return (0);
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

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count += 1;
		}
		if (!format[i])
			return (count);
		f = check_type(&format[i + 1]);
		if (f != NULL)
		{
			count += f(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (count);
}
