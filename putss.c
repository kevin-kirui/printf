#include "main.h"

/**
 * putss - print a string to stdout
 *
 * @str: input string
 * Return: number of characters printed
 */
int putss(char *str);

int main(void)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	return (i);
}

