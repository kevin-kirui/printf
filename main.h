#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of specifier
 * @function: function for conversion specifier
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

typedef int (*handler_func)(const char *, va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(const char *str);
int print_integer(int num);
int print_bin(va_list val);
int putss(char *str);

#endif

