#include "main.h"

/**
 */
int _printocta(char *format, va_list param)
{
	unsigned int number = va_arg(param, unsigned int);
	unsigned int c;
	char *octa;
	int i, j = 0, count = 0;
	(void)format;

	if (number == 0)
		return (_putchar('0'));
	for (c = number; c != 0; j++)
	{
		c = c / 8;
	}
	octa = malloc(j);
	if (!octa)
		return (-1);
	for (i = j - 1; i >= 0; i--)
	{
		octa[i] = number % 8 + '0';
		number = number / 8;
	}
	for (i = 0; i < j && octa[i] == '0'; i++)
		;
	for (; i < j; i++)
	{
		_putchar(octa[i]);
		count++;
	}
	free(octa);
	return (count);
}
