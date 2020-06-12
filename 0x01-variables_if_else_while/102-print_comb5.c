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
int i, j, c, k;

for (i = '0'; i <= '9' ; i++)
{
for (j = '0'; j <= '9' ; j++)
{
for (c = i; c <= '9' ; c++)
{
for (k = j + 1; k <= '9'; k++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(c);
putchar(k);
if (i == '9' && j == '8' && c == '9' && k == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
