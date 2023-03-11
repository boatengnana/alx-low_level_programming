#include <stdio.h>

/**
 * main - prints out all the arguments it receives including its name
 * @argc: the number of arguments
 * @argv: the arguments themselves
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
