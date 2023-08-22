#include <unistd.h>

/****printchar****/

/**
 * print_char - write c
 * @c: char to be printed
 * Return: 1
 */

int print_char(char c)
{
        write(1, &c, 1);
        return (1);
}



#include <string.h>
#include <unistd.h>

/****printstring****/

int print_str(char *str)
{
        int length;

        length = strlen(str);

        write(1, str, length);

        return (length);
}




