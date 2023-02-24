#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if ( i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
			}
			else
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
			}
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			_putchar(i + '0');
			_putchar(' ');
		}
	}
	_putchar('\n');

	return (0);
}
