#include "main.h"

/**
 * jack_bauer - prints out every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m, h;
	char zero, zerom;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60 m++)
		{
			zero = h > 9 ? '' : '0';
			zerom = m > 9 ? '' : '0';
			putchar('0' + zero);
			putchar('0' + h);
			putchar(':');
			putchar('0' + zerom);
			putchar('0' + m);
		}
	}
}
