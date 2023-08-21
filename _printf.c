#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - print function
 * @format: format
 * Return: chars
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int number;

	if (format == NULL)
	return (-1);

	number = 0;


	while (*format)
	{
	if (*format != '%')
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
	int c = strlen(b);

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

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	_printf("Hello, %s! This is a %c example.\n", "world", 'c');
	return (0);
}
