#include "main.h"

/**
 *print_alphabet_x10 - function that prints alphabets ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n;
	char j;

	for (n = 0; n < 10; n++)
	{
	for (j = 'a'; j <= 'z'; j++)
	{	
		_putchar(j);
	}
	_putchar('\n');	
	}
}
