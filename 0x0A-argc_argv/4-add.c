#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argv: asfj
 * @argc: asdf
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (k = 0; k < argc; k++)
	{
		if (!isdigit(atoi(argv[k])))
		{
			printf("Error\n");
			return (1);
		}
	}


	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
