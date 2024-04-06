#include <stdio.h>

int main() {
    int intValue = 10;
    float floatValue = 3.14;
    char charValue = 'A';

    int *intPtr = &intValue;
    float *floatPtr = &floatValue;
    char *charPtr = &charValue;

    printf("Dia chi va gia tri cua bien con tro intPtr:\n");
    printf("Dia chi: %p, Gia tri: %d\n", (void *)intPtr, *intPtr);

    printf("\nDia chi va gia tri cua bien con tro floatPtr:\n");
    printf("Dia chi: %p, Gia tri: %.2f\n", (void *)floatPtr, *floatPtr);

    printf("\nDia chi va gia tri cua bien con tro charPtr:\n");
    printf("Dia chi: %p, Gia tri: %c\n", (void *)charPtr, *charPtr);

    return 0;
}
