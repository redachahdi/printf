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
	va_list arguments, cp_argument;
	int (*function)(va_list);
	int k = 0, g, pri_n = 0, w_idth;

	if (!format)
		return (-1);
	va_start(arguments, format);
	va_copy(cp_argument, arguments);
	for (; format && format[k]; k++)
	{
		if (format[k] == '%')
		{
			if (_isdigit(format[k + 1]))
			{
				w_idth = format[k + 1] - '0';
				for (g = k + 2; _isdigit(format[g]); g++)
					w_idth = w_idth * 10 + (format[g] - '0');
				k = g - 1;
			}
			if (format[k + 1] == '\0')
				return (-1);
			for (; format[k + 1] == ' '; k++)
				if (format[k + 2] == '\0')
					return (-1);
			
			function = get_prints(&format[++k]);
pri_n += function ? function(arguments) : _putchar('%') + _putchar(format[k]);
		}
		else
			pri_n += _putchar(format[k]);
	}
	va_end(arguments);
	va_end(cp_argument);
	return (pri_n);
}
