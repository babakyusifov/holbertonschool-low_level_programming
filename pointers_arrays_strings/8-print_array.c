#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @n: description for n
 * @a: var a
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{printf("%d", a[i]);
if (i != n - 1)
{printf(", ");
}
}
printf("\n");
}
