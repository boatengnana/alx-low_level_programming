#include "main.h"
#include <math.h>

/**
 * is_prime_recursive - determines if a number is prime or not
 * @n: number under discussion
 * @i: just a delimeter
 * Return: 1 if prime 0 if not
 */

int is_prime_recursive(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}

	if (i > sqrt(n))
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - determines if a number is prime or not
 * @n: the number
 *
 * Return: integer (0 or 1)
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
