#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was been deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *ex;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	ex = (*head)->next;
	free(*head);
	*head = ex;
	return (num);
}
