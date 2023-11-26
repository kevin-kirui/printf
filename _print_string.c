#include "main.h"
/**
 * _print_string - prints string
 * @str: string
 * Return: void
 */
int _print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
