#include "main.h"

/**
 * jack_bauer - prints out every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h <= 9)
			{
				_putchar('0');
			}
			_putchar('0' + h);
			_putchar(':');
			if (m <= 9)
			{
				_putchar('0');
			}
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
