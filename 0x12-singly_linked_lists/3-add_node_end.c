#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list
 * @head: Address of the first node of a list
 * @str: Address of the string to insert into the new node
 * Return: Address of the new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));
	list_t *node = *head;

	if (head == NULL || new_head == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		else
			new_node->len = _strlen(new_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
	*head = new_node;
	return (new_node);
}
