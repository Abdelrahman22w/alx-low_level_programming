#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: pointer to listint2
 */
void free_listint2(listint_t **head)
{
	listint_t *ex;

	if (head == NULL)
		return;
	while (*head == NULL)
	{
		ex = *head->next;
		free(*head);
		*head = ex;
	}
	*head = NULL;
}
