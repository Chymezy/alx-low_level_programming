#include "main.h"
#include <string.h>

/**
 * _strcat - This function appends source string to destination
 * @dest: is the destination string addres
 * @src: contains the source string address
 *
 * Return: Always return *dest on success.
 */
char *_strcat(char *dest, char *src)
{

	while (*dest)
		dest++;
	while ((*dest++ = *src++))
	{}
	return (dest);
}
