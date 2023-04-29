#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list (head)
 * Return: number of nodes printed
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
