#include <stdio.h>

int findBigNumber(int a, int b) {
    int biggest = (a > b) ? a : b;
    return biggest;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int big = findBigNumber(num1, num2);

    printf(" %d\n", big);

    return 0;
}
