#include "main.h"

/**
 * putss - Custom function to print a string
 * @str: String to be printed
 *
 * Return: The number of characters printed (excluding null byte)
 */
int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			my_putchar(c[count]);
		
		}
	}

	return (count);
}

