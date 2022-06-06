#include <stdio.h>

/**
 * main- prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
char let;

for (let = 'a' ; let <= 'z' ; let++)
{
if (let != 'e' && let != 'q')
{
	putchar(let);
}
}
putchar('\n')
return (0);
}
