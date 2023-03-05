#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int *string1 = s1;
	int *string2 = s2;

	while (*string1 != *string2 && (*string1 != '\0' && *string2 != '\0'))
	{
		string1++;
		string2++;
	}

	if (*string1 > *string2)
	{
		return (15);
	}
	else if (*string1 < *string2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}			
