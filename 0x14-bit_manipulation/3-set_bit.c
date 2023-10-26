#include "main.h"

/**
 * set_bit - set bit value to 1 at a the specified index.
 * @index: starts from position 0
 * @n: pointer number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}

