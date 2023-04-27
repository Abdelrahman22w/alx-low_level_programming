#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the content of the linked list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			ptintf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++
	}
	return (i);
}
