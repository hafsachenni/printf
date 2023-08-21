#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

#define BUFFER_SIZE
#define F_MINUS

/****printchar****/

/**
 * print_char - print a char
 * @types: list of arg
 * @flags: calculates flags
 * @width: width
 * @buffer: array
 * @size: size specifer
 * @precision: precision specification
 * Return: num of chars
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)

{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer));
}

/****print a string****/

/**
 * print_string - prints a string
 * @types: list of arg
 * @flags: flags calculation
 * @width: width
 * @buffer: array to store output
 * @size: size specifer
 * @precision: precision specification
 * Return: num of chars
 */


int print_string(va_list types, char buffer[],
                int flags, int width, int precision, int size)
{
                int length = 0, i;
                char *str = va_arg(types, char *);


        if (str == NULL)
                str = "(null)";


        if (precision >= 0 && precision < (int)strlen(str))
        length = precision;
        else
        length = strlen(str);

        if (width > length && !(flags & F_MINUS))
{
                for (i = width - length; i > 0; i--)
                        buffer[size++] = ' ';
}

                for (i = 0; i < length; i++)
{
        if (size < BUFFER_SIZE - 1)
        {
                buffer[size++] = str[i];
        }
}

        if (width > length && (flags & F_MINUS))
{
        for (i = width - length; i > 0; i--)
                buffer[size++] = ' ';
}

return size;
}
