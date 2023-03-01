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

	if (c[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (c[i] == '+')
	{
		i++;
	}

	while (c[i] >= '0' && c[i] <= '9')
	{
		prev_num = num;
		num = num * 10 + (s[i] - '0');

		if (num < prev_num)
		{
			if (sign == 1)
			{

				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		i++;
	}

	return (sign * num);
}
