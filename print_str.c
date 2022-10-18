#include "main.h"

/**
 * print_str - writes the character c to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_str(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (0);
}
