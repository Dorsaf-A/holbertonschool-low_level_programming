#include "holberton.h"
/**
 * _puts - puts
 * @str: char pointer
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
