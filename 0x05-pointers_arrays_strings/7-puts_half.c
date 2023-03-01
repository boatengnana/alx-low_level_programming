#include "main.h"
#include <string.h>

/**
 * puts_half - prints last half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str), i;
	int i = len % 2 == 0 ? (len - 1) / 2 : len / 2;

	while (i < len - 1)
	{
		printf("%c", *(str + i));
		i++;
	}
	putchar('\n');
}
