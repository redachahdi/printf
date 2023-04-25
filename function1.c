#include "main.h"

/**
 * _strlen - is the length of the given string
 * @s: the string
 * Return: the length of given string
 */

unsigned int _strlen(char *s)
{
	unsigned int legh = 0;

	while (s[legh])
		legh++;

	return (legh);
}
/**
 * reverse_str - is reverses  the given string
 *
 * @s: is the string
 */

void reverse_str(char s[])
{
	unsigned int k = 0, legh = 0;
	char tp;

	legh = _strlen(s);

	for (; k < legh / 2; k++)
	{
		tp = s[k];
		s[k] = s[legh - k - 1];
		s[legh - k - 1] = tp;
	}
}
/**
 * _itoa - is the Converts a long integer .
 *
 *  @n: is the long integer
 *  @s: is  the character array to store the converted string in
 */

void _itoa(long n, char s[])
{
	long sig = n;
	unsigned int k = 0;

	if (sig < 0)
		n = -n;
	do {
		s[k++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sig < 0)
		s[k++] = '-';
	s[k] = '\0';
	reverse_str(s);
}
/**
 * _isdigit - checks for a digit
 * @c:  is the character to be checked
 *
 * Return:  is 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
