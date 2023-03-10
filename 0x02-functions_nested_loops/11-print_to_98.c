#include "main.h"

/**
 * print_to_98 - print numbers from a given number upto 90
 * @n: start value
 *
 * Return: Always 0 (Success)
 */
int print_to_98(int n)
{
	int i, sign;

	i = n > 98 ? n : 0;
	sign = n > 98 ? -1 : 1;
	for (; i != 98; i = i + sign)
	{
		if (n > 99)
		{
			_putchar((i / 100) + '0');
			_putchar(((i / 10) % 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (n > 9 && n <= 99)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
