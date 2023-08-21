#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - print function
 * @format: format
 * Return: chars
*/

int _printf(const char *format, ...)
{
	va_list(args);

	int number = 0;

	if (format == NULL)
	return (-1);

	va_start(args, format);


	while (*format)
	{
	if (*format != '%')
	{
	format++;
	if (*format == 'c')
	{
	write(1, format, 1);
	number++;
	}
	else
	{
	format++;
	if (*format == '\0')
	break;
	else if (*format == 'c')
	{
	char a = va_arg(args, int);

	write(1, &a, 1);
	number++;
	}
	else if (*format == 's')
	{
	char *b = va_arg(args, char *);
	int c = 0;

	while (b[c] != '\0')
	c++;
	write(1, b, c);
	number += c;
	}
	else if (*format == '%')
	{
	write(1, format, 1);
	number++;
		}
	}
	format++;
	}
	va_end(args);

	return (number);
}
