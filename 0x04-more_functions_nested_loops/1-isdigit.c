#include "main.h"

/**
 * _isdigit - checks if a val falls within 0 and 9 inclusive
 * @n: number to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int n)
{
	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	return (0);
}
