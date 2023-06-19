#include <stdio.h>

int main() {
    int size, i;
    float sum = 0, average;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / size;

    printf("\nSum : %.2f\n", sum);
    printf("Average : %.2f\n", average);

    return 0;
}
