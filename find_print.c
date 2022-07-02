#include "main.h"

/**
*find_print - finds how to print each character and coversion specifier
*@ap: argument pointer
*@format: format to print out
*Return: -1 if failure, count of characters printed if sucessfu
*/

int find_print(va_list ap, const char *format)
{
	int i, count = 0;
	char *str;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(ap, int));
					break;
				case 's':
					str = va_arg(ap, char*);
					if (str == NULL)
						return (-1);
					count += print_str(str);
					break;
				case 'i':
					count += print_dec(va_arg(ap, int));
					break;
				case 'd':
					count += print_dec(va_arg(ap, int));
					break;
				default:
					if (format[i] != '%')
						count += print_char('%');
					count += print_char(format[i]);
			}
		}
		else
			count += print_char(format[i]);
	}
	return (count);
}
