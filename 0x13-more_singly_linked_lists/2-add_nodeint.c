#include "lists.h"
/**
 * add_nodeint - add a new node at the beggining of the list
 * @head: a double pointer the the head
 * @n: nuber of elements
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t neww;

	neww = malloc(sizeof(listint_t));

	if (!neww)
	{
		return (NULL);
	}
	neww->n = n;
	neww->next = *head;
	*head = new;
	return (*head);
}
