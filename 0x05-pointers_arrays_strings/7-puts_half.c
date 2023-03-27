#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: no return
 */

void puts_hald(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	i = len % 2 == 0 ? len / 2 : (len + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
