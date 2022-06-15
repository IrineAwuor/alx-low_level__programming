#include "main.h"
#include <stdio.h>


/**
 *_strlen - Returns the length of a string
 *@str: The string to get the length of.
 *Return: The length of @str.
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str)
		str++;
		length++;

	return (length);
}


/**
 *_strcat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);
	int length =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (length);
	*dest = *cat;

	return (cat);
}
