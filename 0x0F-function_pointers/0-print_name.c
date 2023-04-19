#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: a pointer to a function that takes a char pointer argument
 *
 * Description: This function prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
