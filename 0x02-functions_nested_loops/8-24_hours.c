#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n: int
 * Return: 1 or 0 or -1
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
		}
	}
}
