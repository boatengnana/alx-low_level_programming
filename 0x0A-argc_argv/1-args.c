#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments including its name
 * @argv: the argument itself
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
