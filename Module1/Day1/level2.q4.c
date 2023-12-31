#include <stdio.h>
#include <ctype.h>

int getCharacterType(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)) {
            return 1; // Uppercase letter
        } else {
            return 2; // Lowercase letter
        }
    } else if (isdigit(ch)) {
        return 3; // Digit
    } else if (isgraph(ch)) {
        return 4; // Printable symbol
    } else {
        return 5; // Non-printable symbol
    }
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int type = getCharacterType(character);
    switch (type) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}
