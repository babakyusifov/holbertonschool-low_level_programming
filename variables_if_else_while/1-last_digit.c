#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random number and checks the last digit
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int x = n % 10;
if (n > 5)
{
printf("Last digit of %d and %d is greater than 5\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d and %d is 0\n", n, x);
}
else
{
printf("Last digit of %d and %d is less than 6 and not 0\n", n, x);
}
return (0);
}
