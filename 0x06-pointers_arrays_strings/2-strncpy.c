#include "main.h"

/**
 * _strncpy - copies a string into another
 * @dest: destination string
 * @src: source string
 * @n: last string to copy
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		*(dest + i) = *(src + i)
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
