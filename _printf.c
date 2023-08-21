#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - print function
 * @format: format
 * Return: chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j = 0;
	char c, *s;

	if (format == NULL)
		return (-1);

	va_start(args, format[i]; i++)

		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'c';
					c = va_arg(args, int);
					pchar(c);
					j++;
					break;
					case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(null)";
					while (*s != '\0')
					{
						pchar(*s);
						s++;
						j++;
					}
					break;
					case '%':
					pchar('%');
					j++;
					break;
					default:
					return (-1);
				}
			}
			else
			{
				pchar(format[i]);
				j++;
			}
		}
	va_end(args);
	return (j);
}
