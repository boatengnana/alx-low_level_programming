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
	unsigned int len2 = 0, len1 = 0, i = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == "")
		s2 = "";
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2

	mem = malloc(len1 + n + 1);

	if (mem == NULL)
		return (NULL);

	for (; i < len1; i++)
		mem[i] = s1[i];

	for (; k < n; k++)
		mem[len1 + k] = s2[k];

	mem[len1 + n] = '\0';

	return (mem);
}
