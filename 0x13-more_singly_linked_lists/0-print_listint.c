#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Head of the linked list node.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		element_count++;
	}
	return (element_count);
}

