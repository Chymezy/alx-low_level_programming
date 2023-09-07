#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * malloc_checked - Allocates memory using malloc()
 * @b: (unsigned int) Size of the space to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

