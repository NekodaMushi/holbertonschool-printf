#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 *rot13_convert - convert a string in rot 13
 *@arg: string to convert
 *return: the rot13'ed string 
 *
 */

int rot13_convert(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] >= 97 && str[i] <= 109) || (str[i] >= 65 && str[i] <= 77))
			_putchar(str[i + 13]);
		else if ((str[i] >= 110 && str[i] <= 122) || (str[i] >= 78 && str[i] <= 90))
			_putchar(str[i] - 13);
		else
			_putchar(str[i]);
	return(i);
}
