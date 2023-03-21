#include "main.h"
/**
 * print_times_table - functions that prints n times table
 * @n : number to be processed
 * Return: dont return anything
 */
void print_times_table(int n)
{
	int i, j, t;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = j * i;
				if (j == 0)
				{
					_putchar(t + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else if (t < 100)
				{
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				}
				else
				{
					_putchar((t / 100) + '0');
					_putchar(((t / 10) % 10) + '0');
					_putchar((t % 10) + '0');
				}
			}
		}
			_putchar('\n');
		}
}
