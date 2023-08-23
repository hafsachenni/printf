#include <unistd.h>

/**
 * print_c - prints a char
 * @a: char
 * Return: 1
 */

int print_c(char a)
{
	write(1, &a, 1);
	return (1);
}
