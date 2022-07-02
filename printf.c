#include "main.h"

/**
*get_func - finds the correct function to run
*@conv_spec: conversion specifier to match with correct function
*Return: pointer to correct print function, NULL if no match found
*/

int (*get_func(char conv_spec))(va_list, int)
{
	int i = 0;
	type_t get_type[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'i', print_dec},
		{NULL, NULL}
	};

	for (i = 0; get_type[i].form_match != conv_spec; i++)
	{
		if (get_type[i].form_match == NULL)
			return (NULL);
	}
		return (get_type[i].func);
}

/**
*_printf - prints out a line
*@format: format to print out
*Return: count of printed characters on success, a negative number on failure
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int i, count = 0;
	int (*print)(va_list, int);

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print = get_func(format[i]);
			if (print == NULL)
			{
				if (format[i] != '%')
					count += _putchar('%');
				count += _putchar(format[i]);
			}
			else
				count = print(ap, count);
		}
		else
			count += _putchar(format[i]);
		i++;
	if (count == -1)
		return (count);
	}
	return (count);
}
