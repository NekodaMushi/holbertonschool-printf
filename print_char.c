#include "main.h"

/**
 * print_char - printing char
 * @arg: Printed char
 * Return : (0) if succeeded
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (0);
}
