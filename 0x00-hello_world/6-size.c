#include<stdio.h>
/**
*main - size
*Return: 0
*/
int main(void) 
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %ld bytes", sizeof(intType));
printf("Size of float: %ld bytes", sizeof(floatType));
printf("Size of double: %ld bytes", sizeof(doubleType));
printf("Size of char: %ld byte", sizeof(charType));
return (0);
}
