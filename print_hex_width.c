#include "main.h"

/**
 * print_hex - prints hexadecimal
 * @val: arguments.
 * Return: counter.
 */
int main() 
{
	handle_flags((va_list)NULL, 7, 'd');
	return 0;
}
void handle_flags(va_list val, int flags, char specifier) 
{
	printf("Flags: %d, Specifier: %c\n", flags, specifier);
}
