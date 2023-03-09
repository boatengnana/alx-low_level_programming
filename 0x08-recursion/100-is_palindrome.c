#include "main.h"

/**
 * str_len - returns the length of a string
 * @s: the string
 *
 * Return: integer
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + str_len(s + 1));
}

/**
 * is_pal_helper - checks if a string is palindrome
 * @s: the string
 * @start: the first char of the string
 * @end: the last char of the string (definitely not the null byte)
 *
 * Return: integer
 */

int is_pal_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (*(s + start) == *(s + end))
	{
		return (is_pal_helper(s, start + 1, end - 1));
	}

	return (0);
}

/**
 * is_palindrome - returns whether a string is a palindrome or not
 * @s: the string
 *
 * Return: 0 for false 1 for true
 */

int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len <= 1)
	{
		return (1);
	}

	return (is_pal_helper(s, 0, len - 1));
}
