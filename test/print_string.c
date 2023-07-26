#include "main.h"
/**
 *  * _printtstr -  prints the string
 *   * @format: prints the string.
 *    * @param: arguments list containing string
 *     *
 *      *Return: number of printed string.
 *       */
int _printtstr(char *format, va_list param)
{
	char *str = va_arg(param, char *);
	int i;
	(void)format;
	if (str == NULL)
		str = "(null)";
	i = 0;
	while (*str)
	{
		if (*str > 31 && *str < 127)
		{
			_putchar(*str);
			i++;
		}
		else
		{
			i += _putstr("\\x");
			i += _printhex(NULL, *str);
		}
		str++;
	}
	return (i);
}
