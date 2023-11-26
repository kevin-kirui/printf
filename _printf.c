#include "main.h"
/**
 * _printf - print to stdout formatted text
 * @format: format specifier
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					count += _putchar((char) va_arg(args, int));
					break;
				case 's':
					count += _print_string(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					return (-1);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

