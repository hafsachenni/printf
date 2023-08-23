#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - print function
 * @format: format
 * Return: numb of chars printed
 */

int _printf(const char *format, ...)
{
	int number = 0;

	va_list(args);
	int op;

	va_start(args, format);


	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	while (*format)
	{

	if (*format == '\0')
	break;
	else if (*format == '%')
	{
	format++;
	op = con_func(args, *format);
	if (op == 0)
	{
		format--;
		print_c('%');
		op = 1;
	}
	number += op;
	}
	else
	{
		number += print_c(*format);
	}
	format++;
	}
	va_end(args);
	return (number);
}
