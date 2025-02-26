#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number
 *Return: always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive %d.\n", n);
}
else if (n < 0)
{
printf("is negative %d.\n", n);
}
else
{
printf("is zero. \n");
}
return (0);
}
