#include <stdio.h>

int main() {
    int size, i;
    int mini, maxi;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    mini = maxi = arr[0]; 

    for (i = 1; i < size; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }

        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    printf("\nMinimum value : %d\n", mini);
    printf("Maximum value : %d\n", maxi);

    return 0;
}
