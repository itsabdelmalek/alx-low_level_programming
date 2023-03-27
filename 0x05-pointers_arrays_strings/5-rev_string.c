#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
