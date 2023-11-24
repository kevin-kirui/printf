#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of the printf function
 * @format: Format string with placeholders for the arguments
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0, s_count = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			count += putss(va_arg(args, char*));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			my_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}

