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

	for (i = n; i <= 98; n > 98 ? i++)
	{
		putchar('0' + i);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
