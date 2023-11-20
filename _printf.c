#include "main.h"

/**
 * _printf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: number of bytes printed
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
					count += putss(va_arg(args, char *)) - 1;
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
