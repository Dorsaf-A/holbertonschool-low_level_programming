/**
* rev_string - a function that reverse a string
* @s: char pointer
*
*/

void rev_string(char *s)
{
int i, j;
string c;

for (i = 0; s[i] != '\0'; i++)
{
  c[i] = s[i];
}
for (j = 0; j <= i; j++)
{
  s[j] = c[i - j];	
}
}
