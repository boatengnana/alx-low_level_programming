#include <string.h>
#include "main.h"

/**
 * puts2 - outputs an string 
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		printf("%c\n", *(str + i));
	}
}
