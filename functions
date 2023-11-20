#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...);

int handle_int(const char *format, int *i, va_list args);

int handle_string(const char *format, int *i, va_list args);

int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			printed++;
		}
		else
		{
			switch (format[++i])
			{
				case 'd':
				case 'i':
					printed += handle_int(format, &i, args);
					break;
				case 's':
					printed += handle_string(format, &i, args);
					break;
				default:
					break;
			}
		}
	}

	va_end(args);

	return (printed);
}
/**
 * handle_int - printf function
 * @format: format specifier
 * @args: character
 * @i: character
 * Return: chars
 */
int handle_int(const char *format, int *i, va_list args)
{
	int i = 0;
	int num = va_arg(args, int);

	if (num < 0)
	{
		putchar('-');
		num *= -1;
		i++;
	}

	int digits = 0;
	int temp = num;
	int power = 1;

	while (temp)
	{
		digits++;
		temp /= 10;
		power *= 10;
	}

	for (int j = digits - 1; j >= 0; j--)
	{
		int digit = num / power;

		num %= power;
		power /= 10;
		putchar('0' + digit);
		i++;
	}

	return (i);
}
/**
 * handle_string - function prints string
 * @format: format specifier
 * @args: character printed
 * @i: character
 * Return: char printed
 */
int handle_string(const char *format, int *i, va_list args)
{
	int i = 0;
	const char *str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		i++;
		str++;
	}

	return (i);
}
