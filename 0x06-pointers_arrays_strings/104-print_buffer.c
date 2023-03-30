#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("  ");
			if (j + 1 < size)
				printf("%02x ", *(b + j + 1));
			else
				printf("   ");
		}
		for (k = i; k < i + 10; k++)
		{
			if (k >= size)
				break;
			if (*(b + k) >= ' ' && *(b + k) <= '~')
				printf("%c", *(b + k));
			else
				printf(".");
		}
		printf("\n");
	}
}
