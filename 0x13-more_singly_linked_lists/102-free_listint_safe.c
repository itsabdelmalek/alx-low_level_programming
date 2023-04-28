#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}
	return (count);
}
