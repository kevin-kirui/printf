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
	const char *str = str;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					_putchar((char) va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char *);

					while (*str)
					{
						_putchar(*str);
						str++;
						count++;
					}
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					return (-1);
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
