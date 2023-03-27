#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int tempr = *a;

	*a = *b;
	*b = tempr;
}
