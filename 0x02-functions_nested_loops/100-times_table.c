#include "main.h"

/**
 * print_times_table - print somehte adf
 * @n: parameter
 *
 * Return: void
 */
void print_times_table(int n)
{
	int y, m;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (y = 0; y <= n; y++)
	{
		for (m = 0; m <= n; m++)
		{
			int mul = y * m;

			if (m == 0)
			{
				_putchar('0');
			}
			else if (mul < 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul <= 99)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar((mul / 100) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (m < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
