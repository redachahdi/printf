#include "main.h"
#include <stdio.h>
/**
 * _print_int - that prints the integers .
 *
 * @list: is the va_list of integers .
 * Return: the number of the characters printed
 */
int _print_int(va_list list)
{
	int numbr = va_arg(list, int);
	char buffer[50];
	int legh;
	int k;
	int w_idth = 0;

	_itoa(numbr, buffer);
	legh = _strlen(buffer);

	if (w_idth > legh)
	{
		for (k = 0; k < w_idth - legh; k++)
			_putchar(' ');
	}
	return (_puts(buffer));
}


/**
 * print_unsigned - that prints unsigned the integers  
 *
 * @list: is the va_list of unsigned integers .
 * Return: number of characters printed
 */
int _print_unsigned(va_list list)
{
	unsigned int numbr = va_arg(list, unsigned int);
	char buffer[50];

	_itoa(numbr, buffer);
	return (_puts(buffer));
}
