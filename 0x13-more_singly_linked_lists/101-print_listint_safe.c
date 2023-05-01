#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 *
 * @head: A pointer to the first node of the list to print.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *check;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		check = head;
		while (check != current)
		{
			if (current->next == check)
			{
				printf("-> [%p] %d\n", (void *)check, check->n);
				return (count);
			}
			check = check->next;
		}
	}
	return (count);
}
