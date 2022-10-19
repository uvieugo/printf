#include "main.h"

/**
 * print_str - writes the character c to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_str(va_list arg_list)
{
	int j;
	char *str;
	str = va_arg(arg_list, char *);

	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (0);
}
