//Escrever programa para exibir os 25 primeiros números pares a
//partir de 2, e a soma desses.

#include <stdio.h>

int main() {
    int atual = 0;
    int soma = 0;
    for (int i = 1; i <= 25; i++) {
        atual += 2;
        printf("Número #%d: %d\n ", i, atual);
        soma += atual;
    }
    printf("Soma: %d\n", soma);
    return 0;
}