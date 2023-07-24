#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - funtion that handles c, s and %
 * @format: character string.
 *
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int i;
	va_list nox;

	va_start(nox, format);

	i = 0;
	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	switch (*format)
		{
		case 'c':
			putchar(va_arg(nox, int));
			i++;
			break;
		case 's':
			i += printf("%s", va_arg(nox, char *));
			break;
		case '%':
			putchar('%');
			i++;
			break;
			default:
			break;
		}
	}
	else
	{
		putchar(*format);
		i++;
	}
		format++;
	}

	va_end (nox);

	return (i);
}
