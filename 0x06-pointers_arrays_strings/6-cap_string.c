#include "main.h"

/**
 * cap_string - capitalizes a string based on separators
 * @s: string to be capitalized
 *
 * Return: pointer to a character
 */

char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;

	while (*(s + i) != '\0')
	{
		if (isspace(*(s + i)) || isPunc(*(s + i)))
		{
			cap_next = 1;
		}

		else if (cap_next)
		{
			*(s + i) -= 32;
			cap_next = 0;
		}

		i++;
	}
	return (s);
}
