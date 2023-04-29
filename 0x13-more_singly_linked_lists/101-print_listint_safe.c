#include "lists.h"

/**
 * free_listp - Frees a linked list of pointers.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: No return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Safely prints a linked list of integers.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *hptr, *new_node, *add_node;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listp(&hptr);
	return (num_nodes);
}

