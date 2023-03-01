#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i;
	char *str = s;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n);
}
