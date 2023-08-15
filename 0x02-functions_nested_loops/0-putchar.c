#include "main.h"
/**
 * main - Prints _putcha
 * Return: 0 always
 */
int main(void)
{
int n = 0;
char y[] = "_putchar";

while (n <= 7)
{
_putchar(y[n]);
n++;
}
_putchar('\n');
return (0);
}
