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
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	char *mem;
	
	mem = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (mem == NULL)
	{
		return (NULL);
	}

	strcat(s1, s2);
	strcpy(mem, s1);

	return (mem);
}
