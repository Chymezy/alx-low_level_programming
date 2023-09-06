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
	/* Declare variables at the beginning of the function */
	int i;
	int j;
	int avLength = 0;
	char *resultant;
	int position = 0;

	/* Check if ac or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of strings in av (array of string is a 2D array of char) */
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			avLength++;
		}
		avLength++; /* Add extra 1 for newlines */
	}

	/* Allocate memory to the resulting string */
	resultant = (char *)malloc(sizeof(char) * avLength + 1);

	/* Check if memory was allocated accurately */
	if (resultant == NULL)
		return (NULL); /* No need to free resultant here */

	/* Concatenate the strings together */
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			resultant[position++] = av[i][j]; /* Combine characters inside strings */
		}
		resultant[position++] = '\n'; /* Add newline after each string */
	}
	resultant[position] = '\0'; /* Null-terminate the resulting string */

	return (resultant);
}

