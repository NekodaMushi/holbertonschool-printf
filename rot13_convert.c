#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 *rot13_convert - convert a string in rot 13
 *@arg: string to convert
 *return: the rot13'ed string
 *
 */

int rot13_convert(va_list list)
{
	int i;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] >= 'a' && str[i] <= 'M') || (str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i + 13]);
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13);
		else
			_putchar(str[i]);
	return (i);
}
