#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *codex;
	int length = strlen(argv[1]), i, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (length ^ 59) & 63;
	pass[0] = codex[tmp];

	tmp = 0;
	for (i = 0; i < length; i++)
		tmp += argv[1][i];
	pass[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < length; i++)
		tmp *= argv[1][i];
	pass[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pass[3] = codex[rand() & 63];

	tmp = 0;
	for (i = 0; i < length; i++)
		tmp += (argv[1][i] * argv[1][i]);
	pass[4] = codex[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	pass[5] = codex[(tmp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
