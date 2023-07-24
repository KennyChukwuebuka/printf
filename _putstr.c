#include "main.h"

/**
 * _putstr - Writes a string to the standard output.
 * @str: The string to write.
 *
 * Return: The number of characters printed.
 */
int _putstr(char *str)
{
	 int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
