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
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '0';
	return (dest);
}
