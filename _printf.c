#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * _printf - that print data and formatted  the output conversion.
 *
 * @format: is the input of string.
 * Return: the number of the chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int k = 0, l_gt = 0, bf_r = 0;
	va_list ar_gument;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(ar_gument, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[k] == '%' && !format[k + 1]))
		return (-1);
	if (!format[k])
		return (0);
	for (k = 0; format && format[k]; k++)
	{
		if (format[k] == '%')
		{
			if (format[k + 1] == '\0')
			{	print_bff(buffer, bf_r), free(buffer), va_end(ar_gument);
				return (-1);
			}
			else
			{	function = _print_funct(format, k + 1);
				if (function == NULL)
				{
					if (format[k + 1] == ' ' && !format[k + 2])
						return (-1);
					handl_bff(buffer, format[k], bf_r), l_gt++, k--;
				}
				else
				{
					l_gt += function(ar_gument, buffer, bf_r);
					k += _print_funct_ev(format, k + 1);
				}
			} k++;
		}
		else
			handl_bff(buffer, format[k], bf_r), l_gt++;
		for (bf_r = l_gt; bf_r > 1024; bf_r -= 1024)
			;
	}
	print_bff(buffer, bf_r), free(buffer), va_end(ar_gument);
	return (l_gt);
}
