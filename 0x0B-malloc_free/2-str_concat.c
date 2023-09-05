#include "main.h"

/**
 * str_concat - function that joins two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: return concat pointer of the strings
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int joined_length;
	int k;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0 ; s1[k] != '\0' ; k++)
		s1_len++;
	for (k = 0 ; s2[k] != '\0' ; k++)
		s2_len++;


	joined_length = s1_len + s2_len;

	concat_str = malloc((sizeof(char) * joined_length) + 1);

	if (concat_str == NULL)
		return (NULL);
	for (k = 0 ; s1[k] != '\0' ; k++)
		concat_str[k] = s1[k];

	k = 0;

	while (s2[k] != '\0')
	{
		concat_str[s1_len + k] = s2[k];
		k++;
	}


	return (concat_str);
}
