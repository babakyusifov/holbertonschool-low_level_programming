#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 success
 */
int main(void)
{
char kh = 'a';
char bh = 'A';
for (; kh <= 'z' ; kh++)
{
putchar(kh);
}
for (; bh <= 'Z' ; bh++)
{
putchar(bh);
}
putchar('\n');
return (0);
}
