holberton_printf

_printf() - prints everything passed to standard output.

%d is a integer format specifier, used to print the value of an int at the time of decleration, ex _printf("%d", i) or _printf("%d" 123)

%i is a integer format specifier, used to print the value of an int at the time of decleration, ex _printf("%i", i) or _printf("%i", 123)

%s is a string format specifier, used to print the values stored in a character array, ex _printf("%s", i) or _printf("%s", "string")

%c is a character format specifier, used to print the value stored in a character, ex. _printf("%c", c), or _printf("%c", 'c')

anything else passed into the _printf function will be printed in order.

storing _printf() in an int will return the total length of all the characters passed to the function, ex i = _printf("Hello"), would store the value of 5.
