#include "lists.h"

/**
 * find_listint_loop2 - Finds the node where the loop in a linked list starts.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node, or NULL if there's no loop.
 */
listint_t *find_listint_loop2(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;
	listint_t *prev_node;

	slow_ptr = head;
	prev_node = head;

	while (head && slow_ptr && slow_ptr->next)
	{
		head = head->next;
		slow_ptr = slow_ptr->next->next;

		if (head == slow_ptr)
		{
			head = prev_node;
			prev_node = slow_ptr;

			while (1)
			{
				slow_ptr = prev_node;
				while (slow_ptr->next != head && slow_ptr->next != prev_node)
				{
					slow_ptr = slow_ptr->next;
				}
				if (slow_ptr->next == head)
					break;

				head = head->next;
			}
			return (slow_ptr->next);
		}
	}

	return (NULL);
}
