#include "main.h"

/**
 * print_flags_custom - custom flags
 * @custom: ...
 * Return: counter.
 */
#include <stdio.h>

void handle_flags(int flags, char specifier, int zero_flag, int width, int precision, char length_modifier);

int main(void)
{
	handle_flags(7, 'd', 1, 10, 5, 'l');
	return 0;
}
void handle_flags(int flags, char specifier, int zero_flag, int width, int precision, char length_modifier)
{
	printf("Flags: %d, Specifier: %c\n", flags, specifier);
	
	char buffer[30];
	int pos = 0;
	
	buffer[pos++] = (flags & 1) ? '+' : 0;
	buffer[pos++] = (zero_flag == 1) ? '0' : 0;
	pos += sprintf(&buffer[pos], (width > 0) ? "%d" : "", width);
	pos += sprintf(&buffer[pos], (precision >= 0) ? ".%d" : "", precision);
	
	switch (length_modifier)
	{
		case 'l':
		case 'h':
			buffer[pos++] = length_modifier;
			break;
		default:
			break;
	}
	buffer[pos++] = specifier;
	buffer[pos] = '\0';
	puts(buffer);
}

