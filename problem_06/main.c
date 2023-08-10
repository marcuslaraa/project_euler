#include <stdio.h>
#include <math.h>

int inverte(int valor) {
    int invertido = 0;

    while (valor != 0) 
    {
        int digito = valor % 10;
        invertido = invertido * 10 + digito;
        valor /= 10;
    }

    return invertido;
    
}


int main() {
    int i, j, valor, maior = 0;

    for(i = 100; i < 1000; i++) {
        for(j = 100; j < 1000; j++ ) {
            valor = i * j;
            if(inverte(valor) == valor) {
                if(valor > maior) {
                    maior = valor;
                }
            }
        }
    }

    printf("%d", maior);

    
    return 0;
}