#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list val);
int print_s(va_list val);
int _strlenc(const char *s);
int _strlen(char *s);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);


#endif

