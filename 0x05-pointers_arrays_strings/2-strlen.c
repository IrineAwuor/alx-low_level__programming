#include "main.h"

/**
 * strlen - function that returns the length of a string.
 * @s: returns the length of a string
 * Return: length of a string
 */

int _strlen(char *s);
{
	int m;

	for (m = 0; s[m] != '\0'; ++m)
		;
	return (m);
}
