#include "main.h"

/**
 * print_alphabet_x10-Prints the alphabet in lowercase 10 times
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * ten times, with each iteration followed by a newline character.
 * Return: 0
 */

void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
