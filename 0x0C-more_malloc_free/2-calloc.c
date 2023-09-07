#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements,
 *           each of size bytes, and initializes with zero.
 * @nmemb: Number of elements in the array.
 * @size:  Size of each element in the array.
 *
 * Return: If nmemb or size is 0, or if malloc fails, returns NULL.
 *         Otherwise, returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	void *ptr1;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr1 = malloc(nmemb * size);

	if (ptr1 == NULL)
		return (NULL);

	ptr = ptr1;

	for (i = 0; i < (nmemb * size); i += size)
		*(ptr + i) = '\0';

	return (ptr1);
}

