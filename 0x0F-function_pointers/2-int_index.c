#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to be searched
 * @size: the number of elements in the array
 * @cmp: a pointer to the function
 *
 * Return: the index of the first element for which the cmp function does
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
