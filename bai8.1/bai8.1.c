#include <stdio.h>
#include <math.h>


int findGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

float absoluteValue(float num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

float squareRoot(float num) {
    if (num < 0) {
        return NAN;
    }
    return sqrt(num);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);


    printf("%d",findGCD(num1, num2));

    float num;

    scanf("%f", &num);

    printf("%f", absoluteValue(num));

    printf("%f\n",squareRoot(num));

    return 0;
}
