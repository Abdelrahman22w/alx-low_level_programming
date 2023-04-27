#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;
	
	if (head == NULL)
		return;

	node = head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
