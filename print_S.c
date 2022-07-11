#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_S - print the string of non-printable
 * characters which may occurs in stdin, i.e. the chars
 * outside the range of [32 - 126] from ASCII table
 * @list: the string to be converted
 * Return: lenght of output
 */
int print_S(va_list list)
{
	char *st;
	int i, count = 0;

	st = va_arg(list, char *);
	if (st == NULL)
		st = "(null)";

	for (i = 0; *(st + i); i++)
	{
		if (*(st + i) < 32 || *(st + i) >= 127)
		{
			_putchar('\\'), _putchar('x'), count += 2;
			count += print_2hex(*(st + i));
		}
		else
		{
			_putchar(*(st + i));
			count++;
		}
	}
	return (count);
}
/**
 * print_2hex - prints the non printable ASCII character
 * into hexadecimal code
 * @c: the character to print
 * Return: output lenght
 */
int print_2hex(char c)
{
	char arr[2];
	int temp;
	int i = 0, j, count = 0;

	while (c != 0)
	{
		temp = c % 16;
		if (temp >= 10)
			arr[i] = temp + 7 + '0';
		else
			arr[i] = temp + '0';
		c /= 16;
		i++;
		count++;
	}
	if (count == 1)
		_putchar('0');
	count++;
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (count);
}
