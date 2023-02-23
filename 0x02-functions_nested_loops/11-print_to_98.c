#include "main.h"

/**
 * print_to_98 - print numbers from a given number upto 90
 * @n: start value
 *
 * Return: Always 0 (Success)
 */
int print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		if ( i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
