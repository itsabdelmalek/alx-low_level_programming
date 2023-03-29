#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: the array of integers
 * @n: the nulber of elements in the array
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
