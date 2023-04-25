#ifndef _H_MAIN_H_
#define _H_MAIN_H_


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct pt - that struct for the printer functions
 *
 * @type_arg: is the identifier
 * @function: is the pointer to the printer of functions.
 */
typedef struct pt
{
	char *type_arg;
	int (*function)(va_list);
} pt_td;

int _printf(const char *format, ...);
int _print_char(va_list list);
int _print_string(va_list list);
int _print_percet(va_list list);
int (*get_prints(const char *format))(va_list);
int _putchar(char c);
int _print_int(va_list list);
int _print_unsigned(va_list list);
void _itoa(long n, char s[]);
void reverse_str(char s[]);
int _puts(char *str);
unsigned int _strlen(char *s);
#endif
