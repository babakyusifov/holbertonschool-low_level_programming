#include "main.h"

/**
 * main - Prints the alphabet in lowercase followed by a new line.
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
