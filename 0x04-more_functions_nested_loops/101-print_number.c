#include "main.h"

/**
 * print_number - prints out a number
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int num_digits = 0;
	int temp = n;

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	int i;

	for (i = num_digits - 1; i >= 0; i--)
	{
		int digit = ((n / (10 ** i)) % 10);

		_putchar(digit + '0');
	}
}
