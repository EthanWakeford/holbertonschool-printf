#include "main.h"

/**
 * print_dec - prints decimal number
 * @ap: int from ap_list
 * @count: total count of _printf function
 * Return: total of  count plus int
 */

int print_dec(va_list ap, int count)
{
	int c = va_arg(ap, int);

	dec_print(c);
	return (count += int_len(c));
}

/**
 * dec_print - prints an int passed by print_dec
 * @c: int to be printed
 * Return: 0.
 */

int dec_print(int c)
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
		dec_print(a);
	}
	_putchar('0' + c);
	return (0);
}
