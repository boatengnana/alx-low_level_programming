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
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	mem = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	if (mem == NULL)
	{
		return (NULL);
	}

	while (*temp != '\0')
	{
		*mem = *temp;
		mem++;
		temp++;
	}
	*temp = '\0';
	free(mem);

	return (mem);
}
