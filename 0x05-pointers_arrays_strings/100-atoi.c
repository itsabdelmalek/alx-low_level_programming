#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the interger value of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int found_number = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s == '+')
		{
			sign = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_number)
		{
			break;
		}
		else if (*s != ' ')
		{
			return (0);
		}
		s++;
	}
	return (sign * result);
}
