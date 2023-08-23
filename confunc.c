#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * con_func - where to convert
 * @args: va func
 * @inp: input
 * Return: result
 */

int con_func(va_list args, char inp)
{
	char *str;
	char a;
	int b;
	int c;

	switch (inp)
	{
		case 'c':
			a = va_arg(args, int);
			return (print_c(a));
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "";
			return (write(1, str, strlen(str)));
		case '%':
			return (write(1, &inp, 1));
		case 'd':
		case 'i':
			b = va_arg(args, int);
			return (print_i(b));
		case 'u': c = va_arg(args, int);
			  return (print_i(c));
		default:
			  return (0);
	}
}
