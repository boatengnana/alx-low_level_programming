#include "main.h"

/**
 * print_last_digit - prints the last value of a number
 * @n: value whose last value is to be printed out
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	putchar(last_digit + '0');
	return (last_digit);
}
