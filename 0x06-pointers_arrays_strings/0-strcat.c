#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: second string
 * @dest: first string
 *
 * Return: char * (string)
 */

char *_strcat(char *dest, char *src)
{
	dest = dest + src;
	return (*dest);
}
