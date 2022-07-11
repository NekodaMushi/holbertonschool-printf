#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned_int - Print unsigned int
 * @arg: Var used
 * Return: length
 */

int print_unsigned_int(va_list arg)
{
	unsigned int u_num = va_arg(arg, unsigned int);
	int size = 1, length = 0, i, res;

	while (u_num / size > 9)
		size *= 10;
	for (i = size; i >= 1; i /= 10)
	{
		res = (u_num / i) % 10;
		_putchar(res + '0');
		length++;
	}

	return (length);
}
