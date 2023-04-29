#include "lists.h"

/**
 * free_list2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Nothing.
 */
void free_list2(listp_t **head)
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
 * free_listint_safe2 - Frees a linked list, even if it has a loop.
 * @head: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe2(listint_t **head)
{
	size_t nodes_count = 0;
	listp_t *nodes_stack, *new_node, *temp_node;
	listint_t *current_node;

	nodes_stack = NULL;

	while (*head != NULL)
	{
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*head;
		new_node->next = nodes_stack;
		nodes_stack = new_node;

		temp_node = nodes_stack;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
			if (*head == temp_node->p)
			{
				*head = NULL;
				free_list2(&nodes_stack);
				return (nodes_count);
			}
		}

		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		nodes_count++;
	}

	*head = NULL;
	free_list2(&nodes_stack);
	return (nodes_count);
}

