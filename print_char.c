#include "main.h"

/**
 * print_char - prints a character
 * @ap: character to be printed
 * @count: total count of _printf
 * Return: count of 1 or -1 if character is NULL.
 */

int print_char(va_list ap, int count)
{
	char c = va_arg(ap, int);

	(write(1, &c, 1));
	if (c == '\0')
	{
		count = -1;
		return (count);
	}
	return (1);
}
