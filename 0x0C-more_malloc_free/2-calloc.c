#include <stdlib.h>
#include "main.h"

/**
 * _calloc -	Allocates memory for an array of 'nmemb' element
 *		of 'size' bytes using malloc()
 * @nmemb:	number of elements in the array
 * @size:	size of each element in the array
 *
 * Return:	If nmemb or size is zero, NULL is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

