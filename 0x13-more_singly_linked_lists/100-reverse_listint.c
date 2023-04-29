#include "lists.h"

/**
 * reverse_listint - Reverses the singly linked list
 * @head:double pointer to the head of a list.
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nex;

	prev = NULL;
	nex = NULL;

	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nex;
	}

	*head = prev;
	return (*head);
}
