#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
{
n = n * (-1);
}
_putchar(n + '0');
return (n);
}
