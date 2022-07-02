#include "main.h"

/**
 * print_str - returns a string
 * @c: pointer to string to be printed
 * Return: string
 */

int print_str(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	(write(1, &c[i], 1));
	}

	return (stringlength(c));
}
