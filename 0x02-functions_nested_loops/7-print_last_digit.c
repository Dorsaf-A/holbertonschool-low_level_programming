#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * _abs - absolute value
 * @n: int
 * Return: 1 or 0 or -1
 */
int print_last_digit(int n)
{
int i;

i = (n % 10);
if (i < 0)
_putchar((i * (-1)) + '0');
else if
_putchar(i + '0');
  return (0);
}
