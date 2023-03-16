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
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	mem = malloc(sizeof(char) * (len + 1));


	if (mem == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*mem = *str;
		str++;
		mem++;
	}
	*mem = '\0';

	return (mem);
}
