#include <stdio.h>

void fiboSumPar(long long n) {
    long long ult, pen, aux, sum = 0;

    
    for(long long i = 0; i < n; i++) {
        if(i == 0)
            ult = 1;
        if(i == 1)
            ult = 2;

        if(ult % 2 == 0) {
            sum += ult;
            if(sum > n)
            break;
        }  
        
        aux = ult + pen;
        pen = ult;
        ult = aux;
    }

    printf("A soma do valores par numa sequencia fibo eh: %lld", sum);
}

int main() {
    long long val;

    printf("Digite o valor a ser somado:\n");
    scanf("%lld", &val);

    fiboSumPar(val);
}