#include "main.h"

/**
 * binary_length - function that return binary length.
 * @n: number to check.
 * Return: binary lengh
 */
int binary_lengh(int n)
{
	unsigned int bin = n;
	int lengh = 0;

	if (n == 0)
		return (1);

	while (bin > 0)
	{
		lengh++;
		bin /= 2;
	}
	return (lengh);
}

/**
 * get_binary - function that get and
 *  print a binary number of int.
 * @n: number to get.
 */
void get_binary(int n)
{
	unsigned int number = n;

	if ((number / 2) > 0)
		get_binary(number / 2);

	_putchar((number % 2) + '0');
}

/**
 * print_binary - get the integer from _printf %b
 *  and convert
 * @arg: integer to print.
 * Return: binary number length
 */
int print_binary(va_list arg)
{
	int n = va_arg(arg, int);

	get_binary(n);
	return (binary_lengh(n));
}
