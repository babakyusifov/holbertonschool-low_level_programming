#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers from 0 to 14, followed by a new line,
 * 10 times.
 *
 * Description: This function prints all the numbers from 0 to 14, followed by
 * a new line, 10 times.
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i < 10)
{
_putchar('0' + i);
}
else
{
_putchar('1');
_putchar('0' + (i - 10));
}
}
_putchar('\n');
}
}

