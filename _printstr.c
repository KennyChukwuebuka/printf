#include "main.h"

/**
 * _printstr - Prints a string.
 * @format: The format string (unused).
 * @param: A list of arguments containing the string to print.
 *
 * Return: The number of characters printed.
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
