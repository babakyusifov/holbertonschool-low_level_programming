#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

    /* Check if exactly two arguments are passed */
if (argc != 3)
{
printf("Error\n");
return (1);
}

    /* Convert arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

    /* Multiply the numbers */
result = num1 *num2;

    /* Print the result */
printf("%d\n", result);

return (0);
}
