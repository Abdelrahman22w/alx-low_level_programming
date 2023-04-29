#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list safely.
 * @h: head of a list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *newp, *addp;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		newp = malloc(sizeof(listp_t));

		if (newp == NULL)
			exit(98);

		newp->p = (void *)*h;
		newp->next = hptr;
		hptr = newp;

		addp = hptr;

		while (addp->next != NULL)
		{
			addp = addp->next;
			if (*h == addp->p)
			{
				*h = NULL;
				free_listp(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp(&hptr);
	return (nnodes);
}

