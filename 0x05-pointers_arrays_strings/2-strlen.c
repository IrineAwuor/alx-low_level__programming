#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @str: returns the length of a string
 * Return: length of a string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
