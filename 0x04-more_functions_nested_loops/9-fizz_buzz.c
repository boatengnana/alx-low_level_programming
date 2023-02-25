#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - fizz buzz problem
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			system("echo -n 'FizzBuzz '");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				system("echo -n 'Buzz'");
			}
			else
			{
				system("echo -n 'Buzz '");
			}
		}
		else if (i % 3 == 0)
		{
			system("echo -n 'Fizz '");
		}
		else
		{
			char num[4];

			sprintf(num, "%d", i);
			system("echo -n ");
			system(num);
			system("echo -n ' '");
		}
	}
	putchar('\n');
	return (0);
}
