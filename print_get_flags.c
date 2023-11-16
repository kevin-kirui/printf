#include "main.h"

/**
 * prints_flags - handles flags
 * @+: plus
 * Return: counter.
 */
int main(void)
{
	handle_flags(NULL, 7, 'd');
	return (0);
}
void handle_flags(va_list val, int flags, char specifier)
{
	char buffer[100];
	int pos = 0;

	buffer[pos++] = '+';

	for (int i = 0; buffer[i] != '\0'; i++)
	{
		if (flags & 1)
		{
			buffer[pos++] = '+';
		}
		if (flags & 2)
		{
			buffer[pos++] = ' ';
		}
		if (flags & 4)
		{
			buffer[pos++] = '#';
		}
		buffer[pos++] = specifier;
		buffer[pos] = '\0';

		for (int i = 0; buffer[i] != '\0'; i++)
		{
			putchar(buffer[i]);
		}
	}
