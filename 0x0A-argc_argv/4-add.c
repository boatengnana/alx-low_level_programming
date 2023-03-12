#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * @argv: asfj
 * @argc: asdf
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int is_valid = 1;
		char *p = argv[i];

		for (; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				is_valid = 0;
				break;
			}
		}

		if (!is_valid)
		{
			printf("Error\n");
			return (1);
		}

		int num = atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
		else
		{
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
