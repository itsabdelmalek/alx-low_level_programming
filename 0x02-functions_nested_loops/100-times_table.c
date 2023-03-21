#include "main.h"
/**
 * print_times_table - functions that prints n times table
 * @n : number to be processed
 * Return: dont return anything
 */
void print_times_table(int n)
{
	int a, b, t;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				t = a * b;
				_putchar(44);
				_putchar(32);
				if (t <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(t + 48);
				}
				else if (t <= 99)
				{
					_putchar(32);
					_putchar((t / 10) + 48);
					_putchar((t % 10) + 48);
				}
				else
				{
					_putchar(((t / 100) % 10) + 48);
					_putchar(((t / 10) % 10) + 48);
					_putchar((t % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
