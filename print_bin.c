#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int cont = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int mask = 1;

	for (int i = 0; i < 32; i++)
	{
		if ((num & mask) != 0)
		{
			_putchar('1');
			cont++;
		}
		else
		{
			_putchar('0');
		}

		mask <<= 1;
	}

	return (cont);
}
