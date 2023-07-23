#include "main.h"

/**
 */

int _printstr(char *format, va_list param)
{
	char *str = va_arg(param, char *);
	int i;

	(void)format;

	if (str == NULL)
		str = "(null)";
	i = _putstr(str);
	return (i);
}
