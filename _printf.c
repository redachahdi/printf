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
	va_list arguments;
	int (*function)(va_list);
	int k = 0, pri_n = 0;

	if (!format)
		return (-1);

	va_start(arguments, format);

	for (; format && format[k]; k++)
	{
		if (format[k] == '%')
		{
			if (format[k + 1] == '\0')
				return (-1);
			
			for (; format[k + 1] == ' '; k++)
				if (format[k + 2] == '\0')
					return (-1);

			function = get_print(&format[++k]);
			
			pri_n += function ? function(arguments) : _putchar('%') + _putchar(format[k]);
		}
		else
			pri_n += _putchar(format[k]);
	}

	va_end(arguments);
	return (pri_n);
}
