#include "main.h"
/**
 * print_integer - prints integer
 * @num: character to be printed
 * Return: count
 */
int print_integer(int num)
{
	int i, is_negative = 0;
	char digits[11];
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	is_negative = (num < 0);

	if (is_negative)
	{
		num *= -1;
		count += _putchar('-');
	}

	while (num > 0)
	{
		digits[i++] = (char) ('0' + num % 10);
		num /= 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(digits[i]);
	}

	return (count);
}
