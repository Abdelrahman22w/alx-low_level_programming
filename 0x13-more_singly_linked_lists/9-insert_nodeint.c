#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a linked list.
 *
 * @head: Pointer to the head of the linked list.
 * @idx: Index of the list where the new node is added.
 * @n: Integer element to be added to the list.
 *
 * Return: Address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp_node;

	temp_node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp_node != NULL; i++)
			temp_node = temp_node->next;
	}

	if (temp_node == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp_node->next;
		temp_node->next = new_node;
	}

	return (new_node);
}
