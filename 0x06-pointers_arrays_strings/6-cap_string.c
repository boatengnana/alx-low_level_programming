#include "main.h"
#include <ctype.h>

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
		if (isspace(*(s + i)) || ispunct(*(s + i)))
		{
			cap_next = 1;
		}

		else if (cap_next)
		{
			*(s + i) = toupper(*(s + i));
			cap_next = 0;
		}

		i++;
	}
	return (s);
}
