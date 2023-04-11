#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, n = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count_words(str);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] && j < n; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (k = i; str[k] && str[k] != ' '; k++)
				len++;
			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (j--; j >= 0; j--)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[i + k];
			words[j][k] = '\0';
			j++;
			i += len;
		}
	}
	words[j] = NULL;
	return (words);
}
