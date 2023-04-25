#ifndef _H_MAIN_H_
#define _H_MAIN_H_


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - that struct for the printer functions
 *
 * @type_arg: is the identifier
 * @f: is the pointer to the printer of functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_td;

int _printf(const char *format, ...);
int char_print(va_list list);
int string_print(va_list list);
int percet_print(va_list list);
int (*get_prints(const char *format))(va_list);
int _putchar(char c);
#endif
