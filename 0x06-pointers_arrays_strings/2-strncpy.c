/**
 *_strncpy - copy n char
 * @dest: char pointer
 * @src: char pointer
 * @n: integer
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	if (n < j)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	else
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
	dest[j] = '\0';
	return (dest);
}
