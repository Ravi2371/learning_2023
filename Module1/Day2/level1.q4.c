#include <stdio.h>

int countSetBits(int arr[], int size);
int countSetBitsInNumber(int num);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSetBits = countSetBits(arr, size);

    printf("Total number of set bits in the array: %d\n", totalSetBits);

    return 0;
}

int countSetBits(int arr[], int size) {
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBitsInNumber(arr[i]);
    }

    return totalSetBits;
}

int countSetBitsInNumber(int num) {
    int count = 0;

    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1; 
    }

    return count;
}
