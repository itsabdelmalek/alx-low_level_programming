#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9';)
	{
		if (c == '2' || c == '4')
		{
			break;
		}
			_putchar(c);
			c++;
	}
	_putchar('\n');
}
