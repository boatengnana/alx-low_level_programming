#include "main.h"
#include <math.h>

/**
 * is_prime_number - determines if a number is prime or not
 * @n: number under discussion
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}

	for (; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
