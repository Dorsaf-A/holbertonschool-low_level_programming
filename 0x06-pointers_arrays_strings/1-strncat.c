/**
* _strncat - concat n char
* @dest: char pointer
* @src: char pointer
* @n: integer
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
