#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 * Description: This function prints all the numbers from 0 to 9
 * and then prints a new line.
 */

void print_numbers(void)
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
