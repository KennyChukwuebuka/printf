#include "main.h"
/**
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}

/**
 */
int countdigit(int num)
{
	int c = 0;
	int num2 = num;

	if (num <= 0)
		c += 1;
	
	while (_abs(num2) != 0)
	{
		num2 = num2 / 10;
		c++;
	}
	return (c);
}
/**
 */
int integer(int num)
{
	unsigned int un;
	int c;
	int digit;

	c = countdigit(num);

	if (num < 0)
	{
		_putchar('-');
		un = -num;
	}
	else
	{
		un = num;
	}
		if (un < 10)
		{
			_putchar(un + '0');
			return (c);
		}
		digit = un % 10;
		integer(un / 10);
		_putchar(digit + '0');
		return (c);
}
/**
 */
int printint(char *format, va_list param)
{
	int num = va_arg(param, int);
	int numz;
	(void)format;
	numz = integer(num);
	return (numz);
}


