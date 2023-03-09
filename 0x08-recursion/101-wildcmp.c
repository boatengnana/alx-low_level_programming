#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: seecond string
 *
 * Return: 0 for false, 1 for true
 */

int wildcmp(char *s1, char s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s1 == '\0')
	{
		return (*s2 == '*' && wildcmp(s1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
