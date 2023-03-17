#include "main.h"

/**
 * string_nconcat - concatenates to strings at a point
 * @s1: the first string
 * @s2: the second string
 * @n: the delimeter
 *
 * Return: pointer to character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	int len2 = strlen(s2);
	int len1 = strlen(s1);
	int i = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (n >= len2)
	{
		strcat(s1, s2);
	}
	else
	{
		for (; i < n; i++)
		{
			strcat(s1, s2[i]);
		}
	}

	mem = malloc(sizeof(char) * (len1 + len2 + 1));

	mem = s1;

	return (mem);
}
