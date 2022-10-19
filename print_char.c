#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list arg_list)
{
	char c;

	c = va_arg(arg_list, int);
	_putchar(c);
	return (0);
}
