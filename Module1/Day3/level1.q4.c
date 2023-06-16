#include <stdio.h>
#include <stdlib.h>
int findLargestNumber(int num) {
    int largest = 0;
    char str[5];
    sprintf(str, "%d", num);
    for (int i = 0; i < 4; i++) {
        
        char temp[4];
        int index = 0;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp[index++] = str[j];
            }
        }
        
        
        temp[index] = '\0';
        int tempNum = atoi(temp);
        
        if (tempNum > largest) {
            largest = tempNum;
        }
    }
    
    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNum = findLargestNumber(num);
    printf("The largest number after deleting a single digit: %d\n", largestNum);
    
    return 0;
}
