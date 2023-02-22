#include "main.c"

/**
 * print_alphabet_x10 - print alphabets ten times 
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	char z;

	for (c = 0; c < 10; c++)
	{
		for (z = 'a'; z < 'z'; z++)
		{
			_putchar(z);
		}
		putchar('\n');
	}
}
