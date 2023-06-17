#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    unsigned char* p1 = (unsigned char*)ptr1;
    unsigned char* p2 = (unsigned char*)ptr2;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int int1, int2;
    float float1, float2;
    char char1, char2;

    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &float1, &float2);

    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);

    printf("\nBefore swapping:\n");
    printf("int1 = %d, int2 = %d\n", int1, int2);
    printf("float1 = %.2f, float2 = %.2f\n", float1, float2);
    printf("char1 = %c, char2 = %c\n", char1, char2);

    
    swap(&int1, &int2, sizeof(int));
    swap(&float1, &float2, sizeof(float));
    swap(&char1, &char2, sizeof(char));

    printf("\nAfter swapping:\n");
    printf("int1 = %d, int2 = %d\n", int1, int2);
    printf("float1 = %.2f, float2 = %.2f\n", float1, float2);
    printf("char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
