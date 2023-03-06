#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: size of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j,i, temp;

	for (i = 0, j = n -1; i < j; i++, j--)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
	}
}
