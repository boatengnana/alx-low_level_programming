#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @c: character
 *
 * Return: int
 */

int _atoi(char *c)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while (c[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (c == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
