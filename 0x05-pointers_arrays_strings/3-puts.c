#include "main.h"
/**
 * _puts - prints a string to sdout
 * @str: the string to be printed
 *
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++
	}
	_putchar('\n');
}
