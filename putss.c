#include "main.h"

/**
 * putss - Custom function to print a string
 * @str: String to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 */
int putss(const char *str)
{
	int count = 0;

	if (str)
	{
		while (str[count] != '\0')
		{
			my_putchar(str[count]);
			count++;
		}
	}

	return count;
}

