#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n doesn't have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
		if (i * i > n)
			break;
	}
	return (_sqrt_recursion(n - i * i) + 1);
}
