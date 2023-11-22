#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of specifier
 * @function: function for conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)(void);
} match;

int my_putchar(char c);
int _printf(const char *format, ...);
int putss(const char *str);

#endif

