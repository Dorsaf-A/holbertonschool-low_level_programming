/**
 * _strchr -  locates a character in a string.
 * @s: char pointer
 * @c: char
 * Return: char
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s == c)
			return (s);
		s++;
	return (0);
}
