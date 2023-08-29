#include "main.h"

/**
 * set_string - Set a string using pointer `*s` to another pointer `to`
 * @s: The pointer holding the address of pointer to
 * @to: The pointer holding the address of second we want to change
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
