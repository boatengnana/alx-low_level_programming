#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if(letter == 'e' || letter == 'q')
		{
			continue
		}

		putchar(letter);
	}

	putchar('\n');
	return (0);
}
