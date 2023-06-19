#include "main.h"

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{

	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference between the two integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The result of the division, or 0 if the denominator is 0
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - Calculates the modulo of two integers
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The modulo of the two integers, or 0 if the denominator is 0
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
