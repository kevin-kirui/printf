#include "main.h"

/**
 * print_flags_minus - handles flags
 * @brief: This function handles flags for a specific case.
 *
 * @param: flag The flag to handle.
 * @Return: The result of the flag handling.
 */
int main(void)
{
	print_flags_minus((va_list)7, 10, 'l', 'd', 1, 5, 1);
	return (0);
}
void print_flags_minus(int flags, int width, char length_modifier, char specifier, int zero_flag, int precision, int minus_flag)
{
	char buffer[30];
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
	if (minus_flag == 1)
	{
		buffer[pos++] = '-';
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
	}
	else if (length_modifier == 'h')
	{
		buffer[pos++] = 'h';
	}
	buffer[pos++] = specifier;
	buffer[pos] = '\0';

	for (int i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
}
