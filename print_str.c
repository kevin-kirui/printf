#include "main.h"

/**
 * _strlen - finds lenght of string.
 * @s: string
 * Return: integer.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - finds string length of constant characters
 * @s: string
 * Return: integer
 */
int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

