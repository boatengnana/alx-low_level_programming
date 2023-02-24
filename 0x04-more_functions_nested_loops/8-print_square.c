#include "main.h"

/**
 * print_squaree - print some silly square
 * @size: lenth of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (j < size)
	{
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
