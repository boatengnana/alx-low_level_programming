#include "main.h"
#include <stdlib.h>
/**
 * _islower - checks if a value is lower case then prints out the result
 *@c: is the value to be checked
 *
 * Return: nothing
 */
int _islower(int c)
{
	int result = c >= 'a' && c <= 'z' ? 0 : 1;

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
