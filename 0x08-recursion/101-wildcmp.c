#include "main.h"

/**
 * wildcmp - compares two strings considering special character *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0')
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == '\0')
	{
		return (*s2 == '\0' ? 1 : 0);
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
