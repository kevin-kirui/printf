#include "main.h"

/**
 * print_flags_zero - handle zero flag
 * @o: zero
 * Return: counter.
 */

void handle_flags(va_list val, int flags, int width, char length_modifier, char specifier, int zero_flag, int precision)
{
	char buffer[100];
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

	if (zero_flag == 1)
	{
		buffer[pos++] = '0';
	}

	if (width > 0)
	{
		pos += sprintf(&buffer[pos], "%d", width);
	}

	if (precision >= 0)
	{
		pos += sprintf(&buffer[pos], ".%d", precision);
	}

	if (length_modifier == 'l')
	{
		buffer[pos++] = 'l';
	} else if (length_modifier == 'h')
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
