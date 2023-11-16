#include "main.h"

/**
 * _priintf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
		putchar(va_arg(args, int));
			i++;
		
		}
		else if (format[i + 1] == 's')
		{
			s_count = putss(va_args(args, char *));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
