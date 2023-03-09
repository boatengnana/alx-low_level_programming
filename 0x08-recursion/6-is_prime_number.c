#include "main.h"
#include <math.h>

/**
 * is_prime_number - determines if a number is prime or not
 * @n: number under discussion
 * @i: just a delimeter
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n, int i = 2)
{
	if (i > sqrt(n))
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	if (n < 2)
	{
		return (0);
	}

	return (is_prime_number(n, i + 1));
}
