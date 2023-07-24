#include "main.h"
/**
 * printpercentsign - Writes a percent sign to the standard output.
 * @format: A pointer to a character string that contains
 * the format specifier (unused).
 * @para: A va_list of arguments (unused).
 *
 * Return: Always returns 1.
 */

int printpercentsign(char *format, va_list para)
{
	(void)format;
	(void)para;
	_putchar('%');
	return (1);
}
