#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_start);
}
