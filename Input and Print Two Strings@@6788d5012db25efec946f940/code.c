#include <stdio.h>
int main() {
    char word1[20], word2[20];  // Declaring two strings

    // Taking input for two words
    printf("Enter two words: ");
    scanf("%s %s", word1, word2);

    // Printing the entered words
    printf("You entered: %s and %s\n", word1, word2);

    return 0;
}
