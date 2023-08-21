#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * _printf - print function
 * @format: format
 * Return: chars
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg_p;


	va_start(arg_p, format);

	if (format == NULL)
	{
		va_end(arg_p);
		return (-1);
	}


	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
		if (*format == 'c')
		{
			char c = va_arg(arg_p, int);
			write(1, &c, 1);
			count++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(arg_p, char *);

			if (str != NULL)
			{
				write(1, str, strlen(str));
				count += strlen(str);
			}
		}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

	va_end(arg_p);

	return (count);
}
