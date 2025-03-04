#include <stdio.h>

// Declaration of the _isupper function
int _isupper(int c);

int main(void) {
    char test_char = 'A';
    printf("%d\n", _isupper(test_char));  // Should print 1 (true)
    test_char = 'a';
    printf("%d\n", _isupper(test_char));  // Should print 0 (false)
    return 0;
}

