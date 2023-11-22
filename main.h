#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include "putss.h"

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

int _printf(const char *format, ...);
int putss(const char *str);
int print_c(va_list val);
int print_s(va_list val);
#endif

