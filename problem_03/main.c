#include <stdio.h>
#include <math.h>


int sumPotsquare(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }

    return sum;
}

int sumSquarePot(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    sum = pow(sum, 2);

    return sum;
}




int main () {
    int val;
    printf("Digite o valor a ser preocessado:\n");
    scanf("%d", &val);

    printf("\nA diferenças dos quadrados eh = %d", sumSquarePot(val) - sumPotsquare(val));
    return 0;
}