#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int avLength = 0;
	char *resultant;
	int position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			avLength++;
		}
		avLength++;
	}

	resultant = (char *)malloc(sizeof(char) * avLength + 1);

	if (resultant == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			resultant[position++] = av[i][j];
		resultant[position++] = '\n';
	}
	resultant[position] = '\0';

	return (resultant);
}

