#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("%d\n", number);

    *ptr = 20;
    printf("%d", number);

    return 0;
}
