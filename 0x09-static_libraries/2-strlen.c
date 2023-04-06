#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string to be processed
 *
 * Return: always returns 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
	{
		length++;
	}
	return (length);
}
