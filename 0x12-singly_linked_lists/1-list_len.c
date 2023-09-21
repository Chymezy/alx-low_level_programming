#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of nodes in a linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

