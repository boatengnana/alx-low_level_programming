#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @str: value to be reversed
 *
 * Return: void
 */

void rev_string(char *str)
{
	int len = strlen(str);
	char *p1 = str, *p2 = str + len - 1;

	while (*p1 < *p2)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}
