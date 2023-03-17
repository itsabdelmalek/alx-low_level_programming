#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
