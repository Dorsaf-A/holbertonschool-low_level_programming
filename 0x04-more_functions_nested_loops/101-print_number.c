#include "holberton.h"
/**
 * print_number - print number
 * @n:integer
 *
 */
void print_number(int n)
{
int a;
  
  a = n / 10;
  if (a != 0 && a < 9)
  {
    _putchar(a + '0');
  }
}
