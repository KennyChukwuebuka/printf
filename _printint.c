#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @num: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}

/**
 * countdigit - Counts the number of digits in an integer.
 * @num: The integer to count the digits of.
 *
 * Return: The number of digits in the integer.
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
 * integer - Prints an integer.
 * @num: The integer to print.
 *
 * Return: The number of digits in the integer.
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
 * printint - takes age input from the user
 * @format: first arguments
 * @param: second argument
 *
 * Return: 0
 */
int printint(char *format, va_list param)
{
	int num = va_arg(param, int);
	int numz;
	(void)format;
	numz = integer(num);
	return (numz);
}


