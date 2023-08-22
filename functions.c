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


#include <unistd.h>
#include <stdio.h>
#include <string.h>

/****printint****/

/**
 * print_int - convert int to string
 * @number: int
 * Return: 0
 */

int print_int(int number)
{
	char s[20];

	sprintf(s, "%d", number);
	write(1, s, strlen(s));

	return (strlen(s));
}
