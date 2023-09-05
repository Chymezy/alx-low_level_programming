#include "main.h"

/**
 * create_array - creates an array of chars with
 * initialization with a specific char
 *
 * @size: size of the array
 * @c: characters in the array
 *
 * Return: pointer array (success) and NUll (fail)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *container;

	if (size == 0)
		return (NULL);
	container = malloc(sizeof(char) * size);
	if (container == NULL)
		return (NULL);

	k = 0;

	while (k < size)
	{
		array[k] = c;
		k++;
	}

	return (container);
}

