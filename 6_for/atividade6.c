//Escrever programa para efetuar a exibição dos 30 primeiros
//números ímpares a partir de 51.

#include <stdio.h>

int main() {
    int atual = 49;
    int soma = 0;
    for (int i = 1; i <= 30; i++) {
        atual += 2;
        printf("Número #%d: %d\n", i, atual);
        soma += atual;
    }
    printf("Soma: %d\n", soma);
    return 0;
}