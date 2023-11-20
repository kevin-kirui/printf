#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1


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
int _printf(const char *format, ...);
int _putchar(char c);
int putss(char *str);
int print_percent(va_list types, char buffer[], int flags, int width,
                int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width,
                int precision, int size);
int print_char(va_list types, char buffer[], int flags, int width,
                int precision, int size);
int print_binary(va_list types, char buffer[],
                int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
                int flags, int width, int precision, int size);

#endif

