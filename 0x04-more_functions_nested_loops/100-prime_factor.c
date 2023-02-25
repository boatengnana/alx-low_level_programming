#include "main.h"
#include <stdlib.h>

/**
 * main - prime factors
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long largest_factor = 2;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (long i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largest_factor = n;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
