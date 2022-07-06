#include "main.h"

/**
 * print_string - printing string
 * @arg: Printed string
 * Return : (string's lengh)
 */

int print_string(va_list arg)
{
	int lengh = 0;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = "";

	while (s[lengh])
	{
		_putchar(s[lengh]);
		lengh++;
	}
	return (lengh);
}
