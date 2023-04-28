#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head node of the list
 *
 * Return: the data (n) of the head node that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int data;

	if (*head == NULL)
		return (0);
	current_node = *head;
	*head = (*head)->next;
	data = current_node->n;
	free(current_node);
	return (data);
}
