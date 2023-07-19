#include "main.h"
/**
*print_alphabet - Entry point
*Return:0
*/

void print_alphabet(void);

int main() {
    print_alphabet();
    return 0;
}

// Function definition
void print_alphabet() {
    // Function implementation goes here
    // For example, printing the alphabet
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c ", letter);
    }
    printf("\n");
}

