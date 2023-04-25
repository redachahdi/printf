#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _print_char - that prints the character from the arguments va_list .
 *
 * @list: va_list arg.
 * Return: count of characters printed.
 */

int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * _print_string - that prints the string from the argument.
 *
 * @list: that containing the string to be printed.
 * Return: characters printed.
 */

int _print_string(va_list list)
{
	int k = 0;
	char *string;

	string = va_arg(list, char *);
	if (!string)
		string = "(null)";

	for (; string[k]; k++)
		_putchar(string[k]);

	return (k);
}

/**
 * _print_percet - that prints the percent sign.
 *
 * @list: the list of arguments ..
 * Return: characters printed.
 */

int _print_percet(va_list list)
{
	(void)(list);
	_putchar('%');
	return (1);
}


