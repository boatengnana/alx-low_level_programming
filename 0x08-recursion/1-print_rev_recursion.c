#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of its argument using recursion
 * @s: pointer to the first character of the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *p = s;
	char temp;

	while (*s != '\0')
	{
		s++;
	}

	char *pend = s;

	while (*pend != *p)
	{
		temp = *pend;
		*pend = *p;
		*p = temp;

		pend--;
		p++;

		_print_rev_recursion(s);
	}

}
