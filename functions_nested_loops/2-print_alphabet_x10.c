#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * ten times, with each iteration followed by a newline character.
 * Return: 0
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
if (i != 9)
_putchar('\n');
}
}
