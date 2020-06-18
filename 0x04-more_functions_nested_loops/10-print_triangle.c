#include "holberton.h"

/**
 * print_triangle - print triangle with #
 * @size: integer
 *
 */

void print_triangle(int size)
{
	int i, j, c;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j < size && j > 0; j--)
			_putchar(' ');
		for (c = size - i; c < size; c++)
			_putchar('#');
		_putchar('\n');
	}
_putchar('\n');
}
