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
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	char *mem;
	int len2 = strlen(s2);
	int len1 = strlen(s1);
	int i = 0, k = 0;

	mem = malloc(sizeof(char) * (len1 + len2 + 1));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (; i < len1; i++)
	{
		mem[i] = s1[i];
	}

	int limit = n >= len2 ? len2 : n;

	for (; k < limit; k++)
	{
		mem[len1 + k] = s2[k];
	}

	mem[len1 + limit] = '\0';

	return (mem);
}
