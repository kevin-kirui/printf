#include "main.h"

/**
 * putss - print string
 *
 * @c: string
 *
 * Return: no of byte
 */
int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for ( count = 0; c[count] != '\0'; count ++)
		{
			putchar(c[count]);
		}
	}
	return (count);
}
