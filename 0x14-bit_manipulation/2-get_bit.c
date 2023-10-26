#include "main.h"

/**
 * get_bit - returns bit index at a specified position.
 * @n:bit checker
 * @index: bit position for checking
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	result = n & div;
	if (result == div)
		return (1);

	return (0);
}

