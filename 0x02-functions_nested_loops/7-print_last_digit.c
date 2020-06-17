#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * _abs - valeur absolut
 * @n: int
 * Return: 1 or 0 or -1
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}
int print_last_digit(int n)
{
	n = _abs(n);
	_putchar((n % 10) + '0');
	return (n % 10);
}
