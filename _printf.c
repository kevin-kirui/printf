#include <stdio.h>
#include <stdarg.h>

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
int puts(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
