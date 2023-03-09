#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of its argument using recursion
 * @s: pointer to the first character of the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	
	_putchar(*s);
	s--;
	*s = '\0';
	s--;
	_print_rev_recursion(s);
}
