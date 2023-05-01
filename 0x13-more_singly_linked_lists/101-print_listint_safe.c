#include "lists.h"
#include<stdio.h>

/**
 * print_listint_safe - prints a linked list, handling loops safely
 * @head: pointer to the head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		count++;
		if (slow_ptr == fast_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			while (slow_ptr != fast_ptr->next)
			{
				printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
				slow_ptr = slow_ptr->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			break;
		}
	}
	if (slow_ptr == NULL || fast_ptr == NULL || fast_ptr->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}
