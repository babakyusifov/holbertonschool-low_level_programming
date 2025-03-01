#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: Always 0 success
 */

int main(void)
{
char kh = 'a';
for (; kh <= 'z'; kh++)
{
{
if (kh == 'q' || kh == 'e')
continue;
}
putchar(kh);
}
putchar('\n');
return (0);
}
