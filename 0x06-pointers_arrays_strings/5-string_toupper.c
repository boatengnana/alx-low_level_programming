#include "main.h"

/**
 * string_toupper - converts each letter in a string to uppercase
 * @s: string to be converted
 *
 * Return: character pointer
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}
