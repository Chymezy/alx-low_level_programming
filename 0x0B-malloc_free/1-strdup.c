#include "main.h"

/**
 * _strdup - returns a pointer to a
 * given string str
 *
 * @str: pointer to the given string
 *
 * Return: pointer str (success) and NULL (fail)
 */

char *_strdup(char *str)
{
	char *copy;
	int str_len = 0;
	int k = 0;

	if (str == NULL)
		return (NULL);

	while (str[k] != '\0')
	{
		str_len++;
		k++;
	}

	copy = malloc((sizeof(char) * str_len) + 1);

	if (copy == NULL)
		return (NULL);

	for (k = 0 ; str[k] != '\0' ; k++)
	{
		copy[k] = str[k];
	}

	return (copy);
}
