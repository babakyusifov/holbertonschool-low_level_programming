#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Description: This function prints all the numbers from 0 to 9
 * and then prints a new line.
 */

void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if (i != 2 && i != 4)
{
putchar('0' + i);
}
i++;
}
_putchar('\n');
}
