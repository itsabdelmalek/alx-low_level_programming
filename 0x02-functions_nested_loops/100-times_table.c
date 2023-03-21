#include "main.h"
/**
 * print_times_table - functions that prints n times table
 * @n : number to be processed
 * Return: dont return anything
 */
void print_times_table(int n)
{
	int i, j, t;

	for (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			t = i * j;
			if (t < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(t + '0');
			}
			else if (t < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((t / 100) + '0');
				_putchar(((t / 10) % 10) + '0');
				_putchar((t % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
