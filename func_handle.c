#include "main.h"

/**
 * funcHandle - handle a func
 * @args: input
 * Return: 0
 */

int funcHandle(va_list args, char han)
{
	char *ptr, a;
	int b;

	switch (han)
	{
		case 'c':
			a = va-arg(args, int);
			return (pchar(a));
		case 's':
			ptr = va_arg(args, char *);
			if (ptr == NULL)
				ptr =  "";
			return (write(1, ptr, strlen(ptr)));
		case '%':
			return (write(1, &han, 1));
		case 'd':
		case 'i':
			b = va_arg(args, int);
			return (pint(b));
		default:
			return (0);
	}
}
