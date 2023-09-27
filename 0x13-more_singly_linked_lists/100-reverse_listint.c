#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->nxt == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}

