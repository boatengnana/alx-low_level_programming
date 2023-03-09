#include "main.h"

/**
 * _sqrt_helper - returns the square root of a number
 * @n: the number
 * @i: delimeter
 *
 * Return: integer
 */

int _sqrt_helper(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
