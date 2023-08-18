#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: double pointer to the list
 * @n: element to be inserted to the list
 * Return: address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *temp = *head;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = add;
	add->prev = temp;
	return (add);
}
