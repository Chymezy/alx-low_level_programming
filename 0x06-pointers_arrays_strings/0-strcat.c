#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *save_dest = dest;

	while (*dest)
		dest++;

	while ((*dest++ = *src++))
		;

	return (save_dest);
}

