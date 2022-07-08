#include "main.h"

/**
 * len_octal - fct that returns the length
 * of a octal
 *
 * @nb: number to check
 *
 * Return - octal length
 *
 */

int len_octal(int nb)
{
	unsigned int octal = nb;
	int length = 0;

	if (nb == 0)
		return (1);

	while (octal > 0)
	{
		length++;
		octal /= 8;
	}
	return (length);
}

/**
 * get_octal - fct that prints octal
 *
 * @nb: number to print.
 *
 * Return : Nothing
 */

void get_octal(int nb)
{
	unsigned int number = nb;

	if ((number / 8) > 0)
		get_octal(number / 8);

	_putchar((number % 8) + '0');
}

/**
 * print_octal - get the integer from _printf
 *  and convert
 * @arg: integer to print.
 * Return: octal number length
 */
int print_octal(va_list arg)
{
	int n = va_arg(arg, int);

	get_octal(n);
	return (len_octal(n));
}
