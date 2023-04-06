#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the desttination string
 * @src: the source string
 * @n: the max number of characters to copy
 *
 * Return: a pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
