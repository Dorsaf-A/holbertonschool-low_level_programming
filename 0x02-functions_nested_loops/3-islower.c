#include "holberton.h"

/**
 * _islower -
 * @c: char
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
