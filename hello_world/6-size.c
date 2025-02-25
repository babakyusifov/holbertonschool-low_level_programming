#include <stdio.h>

/**
 * main - prints the size of various data types
 * 
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
    int intType;
    float floatType;
    long int longIntType;
    long long int longlongIntType;
    char charType;

    // Printing the sizes with the desired format
    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongIntType));
    printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

    return (0);
}
