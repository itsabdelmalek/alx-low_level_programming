#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 * or NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	str_copy = malloc((len + 1) * sizeof(char));
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		str_copy[i] = str[i];
	return (str_copy);
}
