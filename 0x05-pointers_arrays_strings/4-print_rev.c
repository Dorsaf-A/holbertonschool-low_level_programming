#include "holberton.h"
/**
 * print_rev - puts reverse
 * @s: char pointer
 */

void print_rev(char *s)
{
int i, j;
	
for (i = 0; s[i] != '\0'; i++)
{
}
for (j = i; s[j] != '\0'; j--)
{
	_putchar(s[j]);
}
_putchar('\n');
}
