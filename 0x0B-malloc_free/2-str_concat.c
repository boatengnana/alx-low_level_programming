#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: stirng 1
 * @s2: string 2
 *
 * Return: pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int k = 0;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	mem = malloc(len1 + len2 + 1);
	if (mem == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		mem[i] = s1[i];
		i++;
	}

	while (k < len2)
	{
		mem[len1 + k] = s2[k];
		k++;
	}
	mem[len1 + len2] = '\0';

	return (mem);
}
