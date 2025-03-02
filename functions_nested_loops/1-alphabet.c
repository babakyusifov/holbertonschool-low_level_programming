#include "main.h"

/**
 *main - Entry point of the program.
 *Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function iterates through the lowercase alphabet
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
