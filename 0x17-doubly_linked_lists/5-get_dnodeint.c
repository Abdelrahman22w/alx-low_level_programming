#include "lists.h"
/**
 * get_dnodeint_at_index - gets the order of the anted node in the list
 * @head: pointer to the list
 * @index: index of the wantedd node
 * Return: address of the wanted node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);

}
