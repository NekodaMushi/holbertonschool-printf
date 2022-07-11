#include "main.h"
#include <stdarg.h>

/**
 * pick_x - prints hex num in lowercase
 * @list: the num to convert and print
 * Return: lenght of the hex
 */

int pick_x(va_list list)
{
	return(print_hexa(va_arg(list, unsigned int), 0));
}

/**
 * pick_X - prints hex num in uppercase
 * @list: the num to convert and print
 * Return: lenght of the hex
 */

int pick_X(va_list list)
{
	return(print_hexa(va_arg(list, unsigned int), 1));
}

/**
 * print_hexa - takes a num and convert it to lower 
 * or upper hexa
 * @num: the num to convert
 * @up_low: parameter for choosing upper or lower hex
 * Return: lenght of the hex
 */

int print_hexa(unsigned int num, int up_low)
{
	int i = 0, j, count = 0;
	unsigned int diff;
	unsigned int rem;
	char hex[17];

	if (up_low == 1)
		diff = 7;
	else
		diff = 39;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
		{
			rem += 48;
		}
		else
		{
			rem +=  diff + 48;
		}
		hex[i] = rem;
		i++;
		num /= 16;
		count++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
	}
	return (count);
}
