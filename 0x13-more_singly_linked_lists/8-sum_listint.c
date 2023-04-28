#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum;

	current_node = head;
	sum = 0;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}

