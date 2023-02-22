#include "main.h"

/**
 * print_last_digit - prints the last value of a number
 * @n: value whose last value is to be printed out
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	n = n < 0? -n: n;
	int last_digit = n % 10;

	putchar('0' + last_digit);
	return (last_digit);
}
