#include <stdio.h>

int isVowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char character;
   character = getchar();
    int result = isVowel(character);
    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    return 0;
}
