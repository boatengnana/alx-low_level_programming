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

	while (*(s + i) != '\0' && (*(s + i) == ',' || *(s + i) == '.' || *(s + i) == ';' || *(s + i) == '"' || *(s + i) == '?' || *(s + i) == '!' || *(s + i) == '(' || *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}'))
	{
		*(s + i + 1) -= 32;
	}
	i++;

	return (s);
}
