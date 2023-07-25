#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct structype
{
	char *v;
	int (*w)(char *format, va_list);
} strtype;

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int printpercentsign(char *format, va_list per);
int (*optimus(const char *format))(char *format, va_list);
int _printc(char *format, va_list param);
int _printstr(char *format, va_list param);
int printint(char *format, va_list param);
int integer(int num);
int countdigit(int num);
int _abs(int num);
int _printocta(char *format, va_list param);
int _printhex(char *format, va_list param);
int _printHEX(char *format, va_list param);
int _printpointer(char *format, va_list args);

#endif /*main.h*/
