#include "main.h"

/**
 * print_str - returns a string
 * @ap: string to be printed
 * @count: total count of _printF
 * Return: total count plus length of the string,
 * if string is NULL return -1.
 */

int print_str(va_list ap, int count)
{
	char *c;
	int i;

	c = va_arg(ap, char*);
	if (c == NULL)
	{
		c = "(null)";
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		(write(1, &c[i], 1));
	}
	return (count += stringlength(c));
}
