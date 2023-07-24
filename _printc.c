#include "main.h"

/**
 * _printc - prints a single character
 * @format: format string (unused)
 * @param: list of arguments containing the character to print
 *
 * Return: number of characters printed (always 1)
 */
int _printc(char *format, va_list param)
{
	(void)format;
	_putchar(va_arg(param, int));
	return (1);
}
