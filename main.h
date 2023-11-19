#ifndef MAIN_H
#define MAIN_H
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

int _printf(const char *format, ...);
int _putchar(char c);
int putss(char *c);


#endif

