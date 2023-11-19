#include "main.h"
/**
 * print_s - prints a string.
 * @val: argument.
 * Return: len of the string.
 */
int print_s(va_list val)
{
	char *s = va_arg(val, char *);
	int len = 0;

	if (!s)
	{
		s = "(null)";
		len = strlen(s);
	}

	for (int i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	return (len);
}
