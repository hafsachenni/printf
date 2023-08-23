#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - print function
 * @format: format
 * Return: numb of chars printed
 */

int _printf(const char *format, ...)
{
	va_list(args);
	int a = 0, s = 0, i;

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	va_start(args, format);

	while (format[a])
	{
		if (format[a] == '\0')
			break;

		else if (format[a] == '%')
		{
			a++;
			i = funcHandle(args, format[a]);
			if (i == 0)
			{
				pchar('%');
				pchar(format[a]);
				i = 1;
			}
			s += i;
		}
		else
		{
			pchar(format[a]);
			s++;
		}
		a++;
	}

	va_end(args);
	return (s);
}
