#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i, start = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & mask)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
			_putchar('0');
	}
	if (!start)
		_putchar('0');
}
