#include "lists.h"
/**
 * add_node - add a new node at the beginning of the linked list
 * @head: double pointer to the list
 * @str: sting added to the node
 *
 * retrun: the address of the new string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (head == NULL || new_head == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_head->str = strdup(str);
		if (new_head->str == NULL)
		{
			free(new_head);
			return (NULL);
		}
		else
			new_head->len = _strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
