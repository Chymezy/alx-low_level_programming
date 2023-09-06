#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (!str || !*str)
		return (NULL);

	int i, j, k, len = 0, count = 0, start = 0;
	char **words;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			count++;
			len = 0;
		}
		else
			len++;
	}
	count++;

	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);

	for (i = 0, j = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			words[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (!words[j])
			{
				while (j-- > 0)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[start + k];
			words[j][len] = '\0';
			j++;
			start = i + 1;
		}
	}

	words[count] = NULL;
	return (words);
}

