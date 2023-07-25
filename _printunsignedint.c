#include "main.h"
/**
 * print_unsigned_int - function print unsigned integer
 * @num: params
 * Return: int
 */
int print_unsigned_int(unsigned int num)
{
	char buffer[20];
	int num_char = 0;
	int i = 0;
	int j;

	do {
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	} while (num != 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		num_char++;
	}
	return (num_char);
}
/**
 * unsigned_int - function that prints unsigned integer
 * @format: format parameter
 * @param: params
 * Return: int
 */
int unsigned_int(char *format, va_list param)
{
	int chars_to_write = 0;
	char c;

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			c = *format;

			if (c == 'd' || c == 'i' || c == 'u')
			{
				unsigned int numba = va_arg(param, unsigned int);

				chars_to_write += print_unsigned_int(numba);
			}
			else if (c == '%')
			{
				_putchar('%');
				chars_to_write++;
			}
			else
			{
				_putchar('%');
				chars_to_write++;
			}
		}
		else
		{
			_putchar(*format);
			chars_to_write++;
		}
		format++;
	}
	return (chars_to_write);
}
