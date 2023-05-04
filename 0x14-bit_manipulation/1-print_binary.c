#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int check = n;

	while (check > 0)
	{
		mask <<= 1;
		check >>= 1;
	}

	mask >>= 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
