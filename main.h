#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of specifier
 * @function: function for conversion specifier
 */

int my_putchar(char c);
int _printf(const char *format, ...);
int putss(char *c);

#endif

