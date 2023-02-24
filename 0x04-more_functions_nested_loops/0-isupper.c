#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: value to be checked
 *
 * Return: 0 or 1
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
