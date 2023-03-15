#include "main.h"

/**
 * _strdup - returns a pointer to a new duplicate string
 * @str: string to be duplicated in memery
 *
 * Return: a pointer to the new string
 */

char *_strdup(char *str)
{
	char *mem;
	char *temp = str;

	mem = malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	if (mem == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*mem = *temp;
		mem++;
		temp++;
	}
	free(mem);

	return (mem);
}
