#include "main.h"

/**
 * create_array - creates and array
 * @size: the size of the array
 * @c: the character to fill the array with
 *
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *mem = (char *) malloc(size * sizeof(char));
	unsigned int i = 0;

	if (*mem)
	{
		while (i < size)
		{
			mem[i] = c;
			i++;
		}
		return (mem);
	}
	else
	{
		return (NULL);
	}
}
