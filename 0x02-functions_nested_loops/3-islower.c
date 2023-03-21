#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * Return: 1 if successful, 0 otherwise
 */
int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
