#include <stdio.h>

int main() {
    int size, i;
    int eis = 0, ois = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (i % 2 == 0) {
            eis += arr[i];
        } else {
            ois += arr[i];
        }
    }

    int difference = eis - ois;

    printf("\nSumming elements at even indexes: %d\n", eis);
    printf("Summing elements at odd indexes: %d\n", ois);
    printf("Difference between even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}
