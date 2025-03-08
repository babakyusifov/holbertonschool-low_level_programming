#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        // Generate a random printable ASCII character (from 'a' to 'z' and 'A' to 'Z')
        password[i] = (rand() % 26) + 'A';  // You can modify this range as per requirements
    }

    // Null-terminate the password string
    password[PASSWORD_LENGTH] = '\0';

    // Print the generated password
    printf("%s\n", password);

	return 0;
}
