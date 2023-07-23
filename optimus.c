#include "main.h"
/**
 */
int (*optimus(const char *format))(char *format, va_list)
{
	int i;
	
	strtype megatron[] = {
		{"%c", _printc},
		{"%s", _printstr},
		{"%%", printpercentsign},
		{"%d", printint},
		{"%i", printint},
		{"%o", _printocta},
		{"%x", _printhex},
		{"%X", _printHEX},
		{NULL, NULL}
	};
	
	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	/*if (format == NULL || format[0] == '\0' || format[1] == '\0')
		return (NULL);*/

	for (i = 0; megatron[i].v; i++)
	{
		if (format[1] == megatron[i].v[1])
			return (megatron[i].w);
	}
	return (NULL);
}
