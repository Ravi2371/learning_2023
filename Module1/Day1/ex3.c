#include <stdio.h>

void printGrade(int prcnt) {
    if (prcnt >= 90 && prcnt <= 100) {
        printf("Grade A\n");
    } else if (prcnt >= 75 && prcnt <= 89) {
        printf("Grade B\n");
    } else if (prcnt >= 60 && prcnt <= 74) {
        printf("Grade C\n");
    } else if (prcnt >= 50 && prcnt <= 59) {
        printf("Grade D\n");
    } else if (prcnt >= 0 && prcnt <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid prcnt entered\n");
    }
}

int main() {
    int prcnt;

    printf("Enter the students percentage ");
    scanf("%d", &prcnt);

    printGrade(prcnt);

    return 0;
}
