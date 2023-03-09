#include "main.h"

/**
 * _pow_recursion - returns a number raised to the power of another number
 * @x: the base number
 * @y: the exponent
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y--));
	}
	else
	{
		return (1);
	}
}

