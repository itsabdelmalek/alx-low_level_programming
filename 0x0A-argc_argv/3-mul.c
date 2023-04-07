#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if the multiplication was successful, 1 otherwise
 */
int main(int argc, char **argv)
{
	int a, b, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;
	printf("%d\n", m);
	return (0);
}

