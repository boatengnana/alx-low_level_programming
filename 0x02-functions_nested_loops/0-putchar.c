#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char word[] = "_putchar";

	for (c = 0; c < strlen(word); c++)
	{
		_putchar(word[c]);
	}
	return (0);
}
