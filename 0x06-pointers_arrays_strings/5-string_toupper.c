/**
 *string_toupper - string toupper
 *@c: char pointer
 *Return: char
 *
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	return (c);
}
