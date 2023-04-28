#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the linked list
 * @head: Pointer to the head
 * @n: the data of the new element
 * Return: pointer to the new node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*heead = new;
		return (new);
	}
	while (temp->new)
		temp = temp->next;
	temp->next = new;
	return (new);
}
