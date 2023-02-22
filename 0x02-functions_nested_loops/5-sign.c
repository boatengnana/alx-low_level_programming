#include "main.h"

/**
 * print_sign - prints out the sign of a number
 * @c: the value under check
 *
 * Return: 1 for postive number, 0 for zero and -1 for negative number
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
