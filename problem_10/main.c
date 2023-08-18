#include <stdio.h>

int isPrime(int n) {
    int res = 0, i = 2;

    for(int j = 2; j <= n; j++) {
        while(i <= j/2) {
            if(j % i++ == 0) {
                break;
            }
        }  

        res += j;   
    }

    return res;
}

int main() {
    int val;

    printf("Digite o valor:\n");
    scanf("%d", &val);
    printf("O valos da soma de todos os numeros primo ate %d eh = %d", val, isPrime(val));
    
    return 0;
}

// RESOLVER2