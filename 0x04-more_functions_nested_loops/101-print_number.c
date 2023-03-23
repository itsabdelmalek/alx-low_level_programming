#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: no return
 */

void print_number(int n)
{
	int digits = 1;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / divisor > 9)
	{
		digits++;
		divisor *= 10;
	}
	while (digits--)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
