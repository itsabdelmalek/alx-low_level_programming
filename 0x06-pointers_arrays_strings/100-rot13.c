#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (ptr);
}
