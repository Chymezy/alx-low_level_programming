#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, res;
	unsigned int k, l;

	k = 0;
	res = 1;
	differnce = n ^ m;
	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (res == (differnce & res))
			l++;
		res <<= 1;
	}

	return (l);
}
