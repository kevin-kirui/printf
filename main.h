#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct format
{
        char *id;
        int (*f)();
}match;
int _printf(const char *format, ...);
int my_putchar(char c);
int putss(char *c);
int print_c(va_list val);
int print_s(va_list val);
void print_buffer(char buffer[], int *buff_ind);
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
void handle_flags(va_list val, int flags, char specifier);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_reverse(va_list args);
int print_rot13str(va_list args);
int get_flags(const char *format, int *index);
int get_width(const char *format, int *index, va_list args);
int get_precision(const char *format, int *index, va_list args);
int get_size(const char *format, int *index);
int handle_print(const char *format, int *index, va_list args, char *buffer, int flags, int width, int precision, int size);
void handle_flags(va_list val, int flags, char specifier);
void print_buffer(char buffer[], int *buff_ind);


#endif

