#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints the number of elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
**/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
