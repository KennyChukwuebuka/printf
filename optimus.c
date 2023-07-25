#include "main.h"
/**
 * optimus - Searches for the appropriate printing
 * function based on the input format string.
 * @format: The format string to search for.
 *
 * Return: A pointer to the appropriate printing function.
 * If no function is found, returns NULL.
 */
int (*optimus(const char *format))(char *format, va_list)
{
	int i;

	strtype megatron[] = {
		{"%c", _printc},
		{"%s", _printstr},
		{"%%", printpercentsign},
		/*{"%u", unsigned_int},*/
		{"%d", printint},
		{"%i", printint},
		{"%o", _printocta},
		{"%x", _printhex},
		{"%X", _printHEX},
		{"%p", _printpointer},
		{NULL, NULL}
	};
	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	/*if (format == NULL || format[0] == '\0' || format[1] == '\0')*/
	/* return (NULL);*/

	for (i = 0; megatron[i].v; i++)
	{
		if (format[1] == megatron[i].v[1])
			return (megatron[i].w);
	}
	return (NULL);
}
