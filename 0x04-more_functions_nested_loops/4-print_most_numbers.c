#include "holberton.h"

/**
 * more_numbers - print digit except 2 and 4
 *
 *
 *
 */

void more_numbers(void)
{
int a;

a = 0;
while (a <= 14)
{
	if (a != 2 && a != 4)
	{
		_putchar(a + '0');
  	}
	a++;
}
_putchar('\n');
}
