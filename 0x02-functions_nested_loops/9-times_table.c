#include "main.h"
/**
 * times_table - prints the 9 tables starting with 0
 *
 * Return: dont return anything
 */
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			if (j == 0)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
				{
					_putchar(' ');
				}
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
