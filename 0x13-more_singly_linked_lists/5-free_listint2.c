#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
