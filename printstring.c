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
		if (*str == '\\')
		{
			str++;
			if (*str == 'n')
			{
				write(1, "\n", 1);
				str++;
				len++;
			}
			else if (*str == 't')
			{
				write(1, "\t", 1);
				str++;
				len++;
			}
		}
		else
		{
			write(1, str, 1);
			str++;
			len++;
		}
	}
	return (len);
}
