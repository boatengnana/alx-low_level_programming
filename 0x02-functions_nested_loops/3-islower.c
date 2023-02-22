#include "main.h"

/**
 * _islower - checks if a value is lower case then prints out the result
 *@c is the value to be checked
 *
 * Return: nothing
 */
int _islower(char c)
{
	int result = islower(c);

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
