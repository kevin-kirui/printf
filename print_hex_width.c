#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    handle_flags(7, 'd');
    return (0);
}

/**
 * handle_flags - Handle flags for the hexadecimal width
 * @flags: Flags to handle
 * @specifier: Format specifier
 *
 * Return: Number of characters printed
 */
void handle_flags(int flags, char specifier)
{
    printf("Flags: %d, Specifier: %c\n", flags, specifier);
}
