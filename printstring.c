#include <string.h>
#include <unistd.h>

/**
 * put_str - print a string
 * @str: str
 * Return: num of char
 */

int put_str(char *str)
{
	int len = 0;

	if (str == NULL)
		str = "";

	while (*str)
	{
		if (*str == '
