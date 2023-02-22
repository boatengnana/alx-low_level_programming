#include "main.h"

/**
 * alphabet - prints all alphabets in upper case
 *
 * Return: always 0 (Success)
 */

void alphabet(void)
{
	char c;

	for (c = 'z'; c <= 'z'; c++)
	{
		_putchar(c);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return(0);
}
