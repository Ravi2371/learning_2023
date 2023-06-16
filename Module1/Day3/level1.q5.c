#include <stdio.h>

void findSmallestAndLargestDigits(int numbers[], int size) {
    int smallest = 9; 
    int largest = 0;  
    
    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        
        
        while (num > 0) {
            int digit = num % 10;
            
            if (digit < smallest) {
                smallest = digit;
            }
            
            if (digit > largest) {
                largest = digit;
            }
            
            num /= 10;
        }
    }
    
    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    findSmallestAndLargestDigits(numbers, n);
    
    return 0;
}
