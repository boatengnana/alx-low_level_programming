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
	int len = strlen(str);
	int i = len % 2 != 0 ? (len - 1) / 2 + 1 : len / 2;

	while (i < len)
	{
		printf("%c", *(str + i));
		i++;
	}
	putchar('\n');
}
