#include <stdio.h>

int main() {
    int primes[100];
    int count = 0;


    int i, j, isPrime;
    for (i = 2; i <= 100; i++) {
        isPrime = 1;


        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            primes[count] = i;
            count++;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }

    return 0;
}
