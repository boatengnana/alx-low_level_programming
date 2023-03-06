#include "main.h"

/** 
 * leet - leet
 * @c: pointer to a string
 *
 * Return: pointer to a character
 */

char *leet(char *c)
{
	int i = 0, j = 0;
	char leet_table[] = "4433007711";
	char *letter = "aAeEoOtTlL";

	while (*(c + i) != '\0')
	{
		while (j < strlen(letter))
		{
			if (str[i] == letter[j])
			{
				str[i] = leet_table[j / 2];
				j++;
				break;
			}
		}
		i++;
	}

	return (c);
}
