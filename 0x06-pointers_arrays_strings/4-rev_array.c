/**
 *reverse_array - reverse array
 * @a: integer pointer
 * @n: integer
 *
 *
 */
void reverse_array(int *a, int n)
{
	int b[500];
	int i;

	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = b[n - i - 1];
}
