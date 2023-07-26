#include "main.h"
/**
 * print_binary - function
 * @number: params
 * Return: binary
 */
int print_binary(unsigned int number)
{
	char buffer[32];

	int num = 0;
	int i = 0;
	int j;

	do {
		buffer[i++] = '0' + (number & 1);
		number >>= 1;
	} while (number != 0);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		num++;
	}
	return (num);
}

/**
 * binary - function to check binary
 * @format: format param
 * @params: param
 * Return: Binary
 */
int binary(char *format, va_list params)
{
	int chars_to_write;
	char c;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			c = *format;

			if (c == 'b')
			{
				unsigned int number = va_arg(params, unsigned int);

				chars_to_write += print_binary(number);
			}
			else if (c == '%')
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
