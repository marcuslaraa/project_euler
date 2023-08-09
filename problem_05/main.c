#include <stdio.h>

long long int largest_prime_factor(long long int number) {
    long long int largestFactor = 0;

    while (number % 2 == 0) {
        largestFactor = 2;
        number /= 2;
    }

    for (long long int i = 3; i * i <= number; i += 2) {
        while (number % i == 0) {
            largestFactor = i;
            number /= i;
        }
    }

    if (number > 2) {
        largestFactor = number;
    }

    return largestFactor;
}

int main() {
    long long int num = 600851475143;
    long long int result = largest_prime_factor(num);

    printf("O maior fator primo de %lld é %lld.\n", num, result);

    return 0;
}
