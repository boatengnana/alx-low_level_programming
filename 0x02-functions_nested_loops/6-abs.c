#include "main.h"

/**
 * _abs - resolves the absolute value of a value
 * @n: the value to be turned absolute
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	int abs_value;

	abs_value = n < 0 ? -n : n;
	return (abs_value);
}
