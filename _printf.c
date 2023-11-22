#include "main.h"

/**
 * _printf - prints function
 * @format: format specifier
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;
	char c;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					c = (char)va_arg(args, int);
					len += putchar(c);
					break;
				case 's':
					len += puts(va_arg(args, char *));
					break;
				case '%':
					putchar('%');
					len++;
					break;
				default:
					putchar('%');
					putchar(*format);
					len += 2;
			}
		}
		else
		{
			putchar(*format);
			len++;
		}

		format++;
	}
	va_end(args);
	return (len);
}
