#include "main.h"

/**
 * print_dec - prints decimal number
 * @c: number to be printed
 * Return: # of digits in the number
 */

int print_dec(int c)
{
	if (c < 0)
	{
		_putchar('-');
		c = -c;
	}
	if (c > 9)
	{
		int a = c / 10;

		c -= 10 * a;
		print_dec(a);
	}
	_putchar('0' + c);
	return (int_len(c));
}
