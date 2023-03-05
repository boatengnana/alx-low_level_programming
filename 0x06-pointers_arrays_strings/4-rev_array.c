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
	int dup[] = *a;
	int *p = dup;
	int i = n - 1;

	for (; i >= 0; i--)
	{
		*a = *(p + i);
		a++;
	}
}
