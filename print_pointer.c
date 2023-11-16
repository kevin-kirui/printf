#include "main.h"

/**
 * print_pointer - prints hexadecimal
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	putchar('0');
	putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}

