#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    printf("Toggle case: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            printf("%c", toupper(str[i]));
        } else if (isupper(str[i])) {
            printf("%c", tolower(str[i]));
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}
