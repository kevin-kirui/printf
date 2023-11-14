#include "main.h"

/**
 * handle_flags_width - prints flags width
 * @width: ...
 * Return: counter.
 */
int main(void)
{
	int " ";
	char " ";
	handle_flags((va_list)NULL, 7, 10, 'l', 'd');
	return (0);
}
void handle_flags(va_list val, int " ", char " ")
{
	char buffer[20];
	int pos = 0;

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

	if (width > 0)
	{
		pos += sprintf(&buffer[pos], "%d", width);
	}

	if (length_modifier == 'l')
	{
		buffer[pos++] = 'l';
	}
	else if (length_modifier == 'h')
	{
		buffer[pos++] = 'h';
	}

	buffer[pos++] = specifier;
	buffer[pos] = '\0';

	for (int i = 0; buffer[i] != '\0'; i++)
	{
		putchar(buffer[i]);
	}
}
