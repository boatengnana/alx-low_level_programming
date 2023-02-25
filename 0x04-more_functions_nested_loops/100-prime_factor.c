#include "main.h"

/**
 * main - prime factors
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long largest_factor = 2;

	while (n > largest_factor)
	{
		if (n % largest_factor == 0)
		{
			n /= largest_factor;
			largest_factor = 2;
		}
		else
		{
			largest_factor++;
		}
	}

	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n  / divisor) % 10 + '0');
		divisor /= 10;
	}

	return (0);
}
