#include<stdio.h>
/**
*main - size
*Return: 0
*/
int main(void) 
{
int a;
float b;
long int c;
long long int d;
char e;
printf("Size of char: %d\n",sizeof(e),"byte(s)");
printf("Size of int: %d\n",sizeof(a),"byte(s)");
printf("Size of long int: %d\n",sizeof(c),"byte(s)");
printf("Size of long long int: %d\n",sizeof(d),"byte(s)");    
printf("Size of float: %d\n",sizeof(b),"byte(s)");   
return (0);
}
