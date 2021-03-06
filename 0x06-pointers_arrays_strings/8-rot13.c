/**
 * rot13 - encodes a string unsing rot13
 * @c: pointer char
 * Return: char
 *
 *
 *
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'a' && c[i] <= 'm')
		    || (c[i] <= 'M' && c[i] >= 'A'))
			c[i] += 13;
		else if ((c[i] >= 'n' && c[i] <= 'z')
			 || (c[i] <= 'Z' && c[i] >= 'N'))
			     c[i] -= 13;
	}
	return c;
}
