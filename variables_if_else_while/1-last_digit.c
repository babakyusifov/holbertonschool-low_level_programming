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
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
