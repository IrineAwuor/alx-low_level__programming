#include "main.h"

/**
 * reverse_array - function to riverse the content of an array of integers
 * @a: array a
 * @n: an element of array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n = n - 1;
	while (i <= n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}
