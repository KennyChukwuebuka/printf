#include "main.h"
/**
 * _printpointer - function to print pointer
 * @format: params
 * @args: params
 * Return: value
 */





int _printpointer(char *format, va_list args)
{

	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;

	int i, digit;

	char buffer[20];
	int count = 0;

	(void)format;

	_putchar('0');
	_putchar('x');
	count += 2;
	i = 0;

	do {
		digit = address % 16;
		buffer[i++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		address /= 16;
	} while (address > 0);

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}
	return (count);
}
