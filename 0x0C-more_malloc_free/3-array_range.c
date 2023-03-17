#include "main.h"

/**
 * array_range - creates an array from a min to a max value
 * @min: min value
 * @max: max value
 *
 * Return: pointer to an integer
 */

int *array_range(int min, int max)
{
	int *mem;
	int i = 0;

	if (min > max)
		return (NULL);

	mem = malloc(sizeof(min) * (max - min + 1));

	if (mem == NULL)
		return (NULL);

	while (i < (max - min + 1))
	{
		mem[i] = min + i;
		i++;
	}

	return ((void *)mem);
}
