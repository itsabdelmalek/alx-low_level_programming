#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: no return
 */
void print_number(int n)
{
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / d >= 10)
		d *= 10;
	while (d != 0)
	{
		_putchar((n / d) % 10 + '0');
		d /= 10;
	}
}
