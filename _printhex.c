#include "main.h"
/**
*/
int _printhex(char *format, va_list param)
{
	unsigned int number = va_arg(param, unsigned int);
	unsigned int number2;
	int i, j, cp, count = 0;
	char *hexnumber;

	(void)format;

	if (number == 0)
		return (_putchar('0'));
	for (number2 = number; number2 != 0; count++)
	{
		number2 = number2 / 16;
	}
	hexnumber = malloc(count);
	for (i = 0; number != 0; i++)
	{
		cp = number % 16;
		if (cp < 10)
			hexnumber[i] = cp + '0';
		else
			hexnumber[i] = cp - 10 + 'a';
		number = number / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexnumber[j]);
	free(hexnumber);
	return (count);
}
/**
*/
int _printHEX(char *format, va_list pa)
{
	unsigned int NUMBERHEX = va_arg(pa, unsigned int);
	unsigned int NUMBER2HEX;
	int I, I2, CP, COUNT = 0;
	char *numHEX;

	(void)format;

	if (NUMBERHEX == 0)
		return (_putchar('0'));
	for (NUMBER2HEX = NUMBERHEX; NUMBER2HEX != 0; COUNT++)
	{
		NUMBER2HEX = NUMBER2HEX / 16;
	}
	numHEX = malloc(COUNT);
	for (I = 0; NUMBERHEX != 0; I++)
	{
		CP = NUMBERHEX % 16;
		if (CP < 10)
			numHEX[I] = CP + '0';
		else
			numHEX[I] = CP - 10 + 'A';
		NUMBERHEX = NUMBERHEX / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(numHEX[I2]);
	free(numHEX);
	return (COUNT);
}
