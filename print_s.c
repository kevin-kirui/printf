#include "main.h"
/**
 * print_s - print a string.
 * @val: argument.
 * Return: len of the string.
 */

int print_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
}

