#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to examine for prefix
 * @accept: bytes that are looked for in intial segement
 * of 's'
 *
 * Return: Length of prefix sub string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
