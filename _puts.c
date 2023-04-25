#include "main.h"

/**
 * _puts - that prints a given string.
 *
 * @str: the given string.
 * Return: count of characters printed.
 */
int _puts(char *str)
{
	int k = 0;

	for (; str[k]; k++)
		_putchar(str[k]);

	return (k);
}
