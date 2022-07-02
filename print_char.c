#include "main.h"

/**
 * print_char - prints a string
 * @c: character to be printed
 * Return: count
 */

int print_char(char c)
{
	(write(1, &c, 1));
	return (1);
}
