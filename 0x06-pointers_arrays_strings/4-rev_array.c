#include "main.h"

/**
 * reverse_array - function to riverse the content of an array of integers
 * @a: array a
 * @n: an element of array
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k <= n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}