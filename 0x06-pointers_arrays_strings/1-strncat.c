#include <string.h>
#include "main.h"

/**
 * _strncat - combines two string according to number of character
 * @dest: destination string to be returned
 * @src: source string to be combined
 * @n: number of string to be combined
 *
 * Return: string on success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *save_dest = dest;
	int len_dest = strlen(dest);
	int i = 0;

	while (*dest)
		dest++;

	for (; src[i] != '\0' && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (save_dest);
}
