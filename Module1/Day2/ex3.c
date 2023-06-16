#include <stdio.h>

int sumAlternateElements(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int sze = sizeof(arr) / sizeof(arr[0]);

    int sum = sumAlternateElements(arr, sze);

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
