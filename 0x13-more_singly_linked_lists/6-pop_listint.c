#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	k = start->n;
	free(start);
	return (k);
}

