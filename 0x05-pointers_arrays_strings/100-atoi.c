#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the interger value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int numb = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			numb = 1;
			result = result * 10 + (*s - '0');
		}
		else if (numb)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
