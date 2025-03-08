#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);  // Prints initial value of n (402)
    reset_to_98(&n);      // Pass the address of n to reset_to_98
    printf("n=%d\n", n);  // Prints the updated value of n (98)
    return (0);
}
