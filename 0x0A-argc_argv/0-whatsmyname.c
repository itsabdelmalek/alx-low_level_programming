#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		printf("%c", argv[0][i]);
	printf("\n");
	return (0);
}
