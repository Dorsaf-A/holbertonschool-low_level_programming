#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, i;

for (n = '0'; n <= '9'; n++)
{
for (i = '0'; i <= '9' ; i++)
{
if (i != '0' || n != '0')
{
putchar(',');
putchar(' ');
}
putchar(n);
putchar(i);
}
}
putchar('\n');
return (0);
}
