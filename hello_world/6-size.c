#include <stdio.h>

/**
* main - printf the size of various data types
*
* Return : Always 0 (Success)
*/

int main(void)
{
int intType;
float floatType;
long int longintType;
long long int longlongintType;
char charType;

printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of char: %zu byte(s)\n", sizeof(charType));

return (0);
}
