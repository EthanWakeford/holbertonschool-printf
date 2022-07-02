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
	char *c = va_arg(ap, char*);
	int i;

	if (c == NULL)
	{
		c = "(null)";
	}
	if (sizeof *(c) != 8)
	{
		count = -1;
		return (count);
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		(write(1, &c[i], 1));
	}
	return (count += stringlength(c));
}
