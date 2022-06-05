#include <stdio.h>

/**
 * main-prints the alphabet in lowercase
 *
 * Return:Always 0.
 */
int main(void)
{
char let;
for (let = 'a' ; let <= 'z' ; let++)
{
	putchar(let);
}
putchar('\n');
return (0);
}

