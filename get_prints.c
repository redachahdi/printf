#include "main.h"

/**
 * get_print - function to return the  pointer .
 *
 * @format: is the format of the argument to be printed.
 * Return: pointer to the appropriate print function, OR NULL .
 */
int (*get_prints(const char *format))(va_list)
{
	int k = 0;
	pt_td pt_types[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percet},
		{NULL, NULL}};

	for (; pt_types[k].type_arg; k++)
	{
		if (*format == *(pt_types[k].type_arg))
		{
			return (pt_types[k].function);
		}
	}
	return (NULL);
}
