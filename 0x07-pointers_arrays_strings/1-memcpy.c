/**
 * _memcpy - a function that copies memory area.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned integer
 * Return: char
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
