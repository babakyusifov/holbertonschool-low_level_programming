#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function iterates through the lowercase alphabet
 * from 'a' to 'z' and prints each character using _putchar. After
 * printing all the letters, it prints a newline character.
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
