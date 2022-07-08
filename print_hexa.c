#include "main.h"

/**
 * len_hexa - fct that returns the length
 * of a hexa
 *
 * @nb: number to check
 *
 * Return - hexadecimal length
 *
 */

int len_hexa(int nb)
{
	unsigned int hexa = nb;
	int length = 0;

	if (n == 0)
		return (1);

	while (hexa > 0)
	{
		length++;
		hexa /= 16;
	}
	return (length);
}

/**
 * get_hexa_maj - fct that prints hexadecimal
 *
 * @nb: number to print.
 *
 * Return : Nothing
 */
void get_hexa_maj(int nb)
{
	unsigned int nb = n;

	if ((nb / 16) > 0)
		hexa_maj(nb / 16);

	if (nb % 16 < 10)
		_putchar((nb % 16) + 48);

	else
		_putchar((nb % 16) + 55);
}

/**
 * get_hexa_min - fct that prints hexadecimal
 *
 * @nb: number to print.
 *
 * Return : Nothing
 */

void get_hexa_min(int nb)
{
	unsigned int nb = n;

	if ((nb / 16) > 0)
		hexa_maj(nb / 16);

	if (nb % 16 < 10)
		_putchar((nb % 16) + 48);

	else
		_putchar((nb % 16) + 70);
}
/**
 * print_hexa - get the integer from _printf
 *  and convert
 * @arg: integer to print.
 * Return: hexadecimal number length
 */
int print_hexa_maj(va_list arg)
{
	int n = va_arg(arg, int);

	get_hexa_maj(n);
	return (len_hexa);
}

/**
 * print_hexa - get the integer from _printf
 *  and convert
 * @arg: integer to print.
 * Return: hexadecimal number length
 */
int print_hexa_min(va_list arg)
{
	int n = va_arg(arg, int);

	get_hexa_min(n);
	return (len_hexa);
}
