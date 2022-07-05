#include "main.h"

/**
*bin_recurse - uses recursion to convert to and print out in binary
*@b: the integer to print
*@count: the count of characters
*Return: the count
*/

int bin_recurse(unsigned int b, int count)
{
	if ((b / 2) != 0)
	{
		count += bin_recurse(b / 2, 1);
	}
	_putchar('0' + (b % 2));
	return (count);
}

/**
*print_bin - prints binary number from argument
*@ap: argument pointer
*@count: count of characters
*Return: count of characters printed
*/

int print_bin(va_list ap, int count)
{
	unsigned int b;

	b = va_arg(ap, unsigned int);
	count += bin_recurse(b, count);
	return (count);
}
