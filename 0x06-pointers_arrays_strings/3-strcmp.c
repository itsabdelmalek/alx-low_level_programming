#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: an integer to indecates the status of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (s1[i]);
}
