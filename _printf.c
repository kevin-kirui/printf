#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include "putss.h"
#include <stdarg.h>
/**
 * _printf - Custom implementation of the printf function
 * @format: Format string with placeholders for the arguments
 * @...: Variable number of arguments to be formatted and printed
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		else
		{
			switch (format[++i])
			{
				case 'c':
					putchar(va_arg(args, int));
					break;
				case 's':
					count += puts(va_arg(args, char *)) - 1;
					break;
				case '%':
					putchar('%');
					break;
				default:
					break;
			}
		}
		count++;
	}
	va_end(args);
	return (count);
}
/**
 * putss - Custom function to print a string
 * @str: String to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 */
int putss(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

