#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Finds the length of a string.
 * @str: The string to find the length of.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int length;

	for (length = 0; str[length]; length++)
		;
	return (length);
}

/**
 * add_node_end - Adds a new node to the end of a linked list.
 * @head: A double pointer to a linked list.
 * @str: The string to add to the new node.
 *
 * Return: A pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

