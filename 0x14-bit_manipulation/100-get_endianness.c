#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *m;

	k = 1;
	m = (char *)&k;

	return (*m);
}
