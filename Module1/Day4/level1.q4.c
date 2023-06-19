#include <stdio.h>

int main() {
    int size, i;
    int evenSum = 0, oddSum = 0;

    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    int difference = evenSum - oddSum;

    printf("\nSumming even elements: %d\n", evenSum);
    printf("Summing odd elements: %d\n", oddSum);
    printf("calculating diff b/w even and odd elements: %d\n", difference);

    return 0;
}
