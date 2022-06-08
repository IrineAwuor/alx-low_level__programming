#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character
 *@c: the character to check
 *
 * Return: 1 if lowercase or uppercase, 0 othewise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
