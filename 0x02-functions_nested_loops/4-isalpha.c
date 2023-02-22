#include "main.h"

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: the value to run the check on
 *
 * Return: 1 for true and 0 for otherwise
 */
int _isalpha(char c)
{
	int result = isalpha(c);

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
