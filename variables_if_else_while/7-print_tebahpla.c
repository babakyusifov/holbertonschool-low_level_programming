#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char la = 'z';
while (la >= 'a')
{
putchar(la);
la--;
}
putchar('\n');
return (0);
}
