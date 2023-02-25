#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - fizz buzz problem
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else
		{
			if (i == 100)
			{
				putchar(i / 100 + '0');
				putchar((i / 10) % 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
			}
			else if (i > 9)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
			}
			else
			{
				putchar(i +'0');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
