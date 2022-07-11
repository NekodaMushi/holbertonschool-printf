#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 *rot13_convert - convert a string in rot 13
 *@list: string to convert
 *Return: the rot13'ed string
 */

int rot13_convert(va_list list)
{
	int i;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			_putchar(s[i] + 13);
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			_putchar(s[i] - 13);
		else
			_putchar(s[i]);
	return (i);
}
