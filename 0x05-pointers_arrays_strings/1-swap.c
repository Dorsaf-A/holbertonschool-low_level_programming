/**
 * swap_int - swap integer
 * @a: pointer integer
 * @b: pointer integer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
