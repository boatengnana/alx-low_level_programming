#include "main.h"

/**
 * string_toupper - converts each letter in a string to uppercase
 * @s: string to be converted
 *
 * Return: character pointer
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}

	return (*s);
}
