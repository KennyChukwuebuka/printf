#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output.*
 * @c: The character to write.
 *
 * Return: On success, returns 1. On error, returns 0.
 */

int _putchar(char c)
{
	static int cha_count; /*static variable that keeps track of character*/
	static char buffer[1024];

	if (c == -1)
	{
		cha_count = 0;
		return (0);
	}
	if (c == -2 || cha_count == 1024)
	{
		write(1, buffer, cha_count);
		cha_count = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[cha_count] = c;
		cha_count++;
		return (1);
	}
	return (0);
}
