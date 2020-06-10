#include<stdio.h>
/**
*main - size
*Return: 0
*/
int main(void) 
{
int intType;
long int floatType;
long long int doubleType;
char charType;
float ftype;
printf("Size of int: %ld bytes", sizeof(intType));
printf("Size of long int: %ld bytes", sizeof(floatType));
printf("Size of long long int: %ld bytes", sizeof(doubleType));
printf("Size of char: %ld byte", sizeof(charType));
printf("Size of float: %ld byte", sizeof(fType));
return (0);
}
