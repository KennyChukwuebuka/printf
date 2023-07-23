#include "main.h"

/**
 */
int _printc(char *format, va_list param)
{
	(void)format;
	_putchar(va_arg(param, int));
	return (1);
}
