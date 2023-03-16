#include "main.h"

/**
 * malloc_checked - returns an empty memory location
 * @b: determinant for the size of space
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	*mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);

}
