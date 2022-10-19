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
	va_list arg_list;

	i = 0;
	va_start(arg_list, format);
	while (i >= 0)
	{
		if (format[i] == '%')
		{
			if (format[i] == '\0')
			{
				va_end(arg_list);
				return(-1);
			}
			else
			{
				if (format[i + 1] == 'c')
				{
					print_char(arg_list);
					i++;
				}
				if (format[i + 1] == 's')
				{
					print_str(arg_list);
					i++;
				}
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(arg_list);
	return (0);
}
