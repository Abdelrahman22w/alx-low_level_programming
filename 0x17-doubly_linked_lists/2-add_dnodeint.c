#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: double pointer to the list
 * @n: element to be inserted to the list
 * Return: address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	add->prev = NULL;
	if (*head)
		(*head)->prev = add;
	*head = add;

	return (add);




}
