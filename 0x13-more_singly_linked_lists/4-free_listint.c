#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *ex;

	while (head != NULL)
	{
		ex = head->next;
		free(head);
		head = ex;
	}
}
