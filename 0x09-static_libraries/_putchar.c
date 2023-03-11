#include <unistd.h>

/**
 * _putchar - putchar
 * @c: character
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
