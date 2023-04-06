#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_is_palindrome_check(s, 0, len - 1));
}

/**
 * _is_palindrome_check - recursive checker for is_palindrome
 * @s: pointer to the string to check
 * @i: index of the first character to check
 * @j: index of the last character to check
 *
 * Return: 1 if the substring s[start..end] is a palindrome, 0 otherwise
 */
int _is_palindrome_check(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_is_palindrome_check(s, i + 1, j - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
