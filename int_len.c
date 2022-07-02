#include "main.h"

/**
 * int_len - gets # of digits in a number
 * @c: digit to get length of
 * Return: # of digits in number
 */

int int_len(int c)
{
	int count = 0;

	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}
