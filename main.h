#ifndef _MAIN_H_
#define _MAIN_H_


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
int (*_print_funct(const char *s, int index))(va_list, char *, unsigned int);
int _print_funct_ev(const char *s, int index);
unsigned int handl_bff(char *bff, char c, unsigned int bf_r);
int print_bff(char *bff, unsigned int nbuf);

#endif
