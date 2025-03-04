#include <stdio.h>

// Declaration of the _isupper function
int _isupper(int c);

int main(void)
{
char test_char = 'A';
printf("%d\n", _isupper(test_char));
test_char = 'a';
printf("%d\n", _isupper(test_char));
return (0);
}
