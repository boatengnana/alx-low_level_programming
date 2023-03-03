#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */

char *_strncat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0') {
		dest++;
 	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (dest_start);
}
