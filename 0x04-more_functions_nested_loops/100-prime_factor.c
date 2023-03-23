#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%ld\n", n);
	}
	else
	{
		printf("No prime factors\n");
	}
	return (0);
}
