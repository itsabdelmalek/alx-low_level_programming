#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array to be iterated over
 * @size: the size of the array
 * @action: a pointer to a function that takes an integer argument
 *
 * Description: This function executes a function given as a parameter
 * on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
