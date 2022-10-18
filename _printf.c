#include <stdarg.h>
#include "main.h"

/**
  * _printf - Function that produces output according to
  * a format
  * @format: input fornat
  * Return: exit status
*/

int _printf(const char *format, ...)
{
	int i;
	char *str;
	va_list arg_list;

	i = 0;
	va_start(arg_list, format);
	while (i >= 0)
	{
		if (format[i] == '\0')
		{
			break;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				print_char(va_arg(arg_list, int));
				i++;
			}
			if (format[i + 1] == 's')
			{
				print_str(va_arg(arg_list, int));
				i++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	return (0);
}
