#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int k;

	num = 1;
	for (k = 1; k <= pow; k++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char holder;

	holder = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			holder = 1;
			_putchar('1');

		}
		else if (holder == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
