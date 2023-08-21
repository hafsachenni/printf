#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * _printf - print function
 * @format: format
 * Return: chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{

		if (*format == '%')
		{

			format++;

			if (*format == '\0')
				break;

			else if (*format == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
				index++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str != NULL)
				{
					while (*str)
					{
						putchar(*str);
						index++;
						str++;
					}
				}
			}
			else
			{
				putchar('%');
				putchar(*format);
				index += 2;
			}
		}
		else
		{
			putchar(*format);
			index++;
		}
		format++;
	}
	va_end(args);
	return (index);
}
