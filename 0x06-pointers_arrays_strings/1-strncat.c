#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: destination string
 * @src: source string
 * @n: number of source charaters to append
 *
 * Return: pointer to a character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest_start != '\0')
	{
		dest_start++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_start = *src;
		dest_start++;
		src++;
		n--;
	}
	*dest_start = '\0';

	return (dest);
}
