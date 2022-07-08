#include "main.h"

/**
 * len_unsigned_int - fct that returns the length
 * of a unsigned_int
 *
 * @nb: number to check
 *
 * Return - unsigned_int length
 *
 */

int len_unsigned_int(int nb)
{
	unsigned int unsigned_int = nb;
	int length = 0;

	if (n == 0)
		return (1);

	while (unsigned_int > 0)
	{
		length++;
		unsigned_int /= 10;
	}
	return (length);
}

/**
 * get_octal - fct that prints unsigned_int
 *
 * @nb: number to print.
 *
 * Return : Nothing
 */

void get_unsigned_int(int nb)
{
	unsigned int number = nb;

	if ((number / 10) > 0)
		get_unsigned_int(number / 8);

	_putchar((number % 10) + '0');
}

/**
 * print_unsigned_int - get the integer from _printf
 *  and convert
 * @arg: integer to print.
 * Return: unsigned_int number length
 */
int print_unsigned_int(va_list arg)
{
	int n = va_arg(arg, int);

	get_unsigned_int(n);
	return (len_unsigned_int);
}
