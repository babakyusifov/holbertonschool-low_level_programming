#include "main.h"
/**
 * print_rev - Entry point
 * @s: description for s
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int len = 0, i;
while (s[len])
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
