#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: Pointer to the new head node of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
	listint_t *current = NULL;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*h = prev;
	return (*h);
}

