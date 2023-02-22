#include "main.h"

/**
 * _abs - resolves the absolute value of a value
 * n: the value to be turned absolute
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	int abs_value;

	n < 0? abs_value = -n: abs_value = n;
	return (abs_value);
}
