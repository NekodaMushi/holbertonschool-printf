#include "main.h"

/**
 * _abs - initial fct
 * @a: ASCII variable used by fct
 * Return: 0 if succeeded
 */
long int ABS(long int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}

/**
 * print_int - fct that return interger
 * @i: number to check
 * Return: number
 *
 */
int print_int(va_list arg)
{
	long int nb = va_arg(arg, int);
	long int len = 0, decade = 1, i, digit;

	if (nb == 0)
		return _putchar('0');

	if (nb < 0)
	{
		len += _putchar('-');
	}

	while ((ABS(nb / decade)) > 9)
		decade *= 10;

	i = decade;
	while (i >= 1)
	{
		if (nb >= 0)
			digit = (nb / i) % 10;
		else
			digit = ((nb / i) % 10) * -1;
		_putchar(digit + '0');

		i /= 10;
		len++;
	}
	return (len);
}
