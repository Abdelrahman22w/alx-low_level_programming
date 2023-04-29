#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @head: Head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		num_nodes++;
	}

	return (num_nodes);
}
