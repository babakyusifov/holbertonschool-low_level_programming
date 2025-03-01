#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int num = 0;
for (; num <= 9; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
