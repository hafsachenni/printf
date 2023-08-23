#include "main.h"

/**
 * pchar - write the char c
 * @c: char to print
 * Return: 1
 */

int pchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * pint - print an int
 * @num: num
 * Return: result
 */

int pint(int num)
{
	char s[12];

	sprintf(s, "%d", num);
	write(1, s1 strlen(s));

	return (strlen(s));
}
