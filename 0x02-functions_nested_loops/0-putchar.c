#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char word[] = "_putchar";
	int len = strlen(word);

	for (c = 0; c < len; c++)
	{
		_putchar(word[c]);
	}
	return (0);
}
