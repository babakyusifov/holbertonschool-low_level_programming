#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else
{
printf("%d, ", n);
n++;
}
}
printf("%d\n", n);
}
