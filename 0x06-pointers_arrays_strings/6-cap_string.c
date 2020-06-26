/**
 * cap_string - capitalizes all words
 * @c: char pointer
 * Return: string
 *
 *
 */
char *cap_string(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == ' ' && c[i + 1] >= 97 && c[i + 1] <= 122)
	c[i + 1] -= 32;
else if (c[i] == '\\' && c[i + 1] >= 97 && c[i + 1] <= 122)
	c[i + 2] -= 32;
}
return (c);
}
