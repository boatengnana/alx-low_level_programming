#include "main.h"
/**
 * leet - leet
 * @c: pointer to a string
 *
 * Return: pointer to a character
 */

char *leet(char *c)
{
	int i = 0;
	char leet_table[] = "4433007711";
	char *letter = "aAeEoOtTlL";

	while (*(c + i) != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (*(letter + j) == *(c + i))
			{
				*(c + i) = leet_table[j / 2];
				break;
			}
			j++;
		}
		i++;
	}

	return (c);
}
