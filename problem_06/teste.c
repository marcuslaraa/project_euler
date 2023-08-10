#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;

    while (num != 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return invertido;
}

int main() {
    int numero, numeroInvertido;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    numeroInvertido = inverterNumero(numero);
    printf("Número invertido: %d\n", numeroInvertido);

    return 0;
}
