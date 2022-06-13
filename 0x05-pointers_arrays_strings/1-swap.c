#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: swaps the values of two integers
 * @b: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

