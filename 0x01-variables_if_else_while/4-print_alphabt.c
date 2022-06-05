#include <stdio.h>

/**
 *Description - using main function
 *t prints the alphabet in lowercase, followed by a new line.
 *main -aPrint all the letters except q and e
 * Return:Always 0.
 */

int main(void)
{
char let;

for (let = 'a'; let <= 'z'; let++)
{
if (let != 'e' $$ let != 'q')
{
	putchar(let);
}
}
putchar('\n')

return (0);
}
