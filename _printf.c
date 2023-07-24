#include "main.h"
/**
 * _printf - function printf
 * @format: params
 * Return: value
 */
int _printf(const char *format, ...)
{
	int i = 0, (*type_struct)(char *, va_list);
	char s[3];
	va_list param;

	if (format == NULL)
		return (-1);
	s[2] = '\0';
	va_start(param, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			type_struct = optimus(format);
			if (type_struct)
			{
				s[0] = '%';
				s[1] = format[1];
				i += type_struct(s, param);
			}
			else if (format[1] != '\0')
			{
				i += _putchar('%');
				i += _putchar(format[1]);
			}
			else
			{
				i += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			i += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (i);
}
