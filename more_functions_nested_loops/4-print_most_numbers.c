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
char numbers[] = "01356789";
int i = 0;
while (numbers[i] != '\0')
{
if (numbers[i] != 2 && numbers[i] != 4)
{
putchar('0' + numbers[i]);
}
i++;
}
_putchar('\n');
}
