#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: length of diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
