#include <stdio.h>

void sumMultiplesOf3Or5(int n) {
    int i, sum = 0;
    for(i = 3; i < n; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("A soma dos multiplos de 3 ou 5 entre 1 e %d eh = %d ", n, sum);
}


int main() {
    int val;
    printf("Digite o valor a ser calculado:\n");
    scanf("%d", &val);

    sumMultiplesOf3Or5(val);



    return 0;
}