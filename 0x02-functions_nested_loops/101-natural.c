#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int sum = 0;
	int digit;
	int i;

	for (i = 0; i < 1024; i ++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
