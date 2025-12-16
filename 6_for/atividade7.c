/*Escrever programa para exibir a soma de 65 números dados
pelo usuário.*/

#include <stdio.h>

int main() {
    int Num, lim;
    int Resultado = 0;
    for (int Cont = 1; Cont <= 65; Cont++) {
        printf("Digite o valor #%d: ", Cont);
        scanf("%d", &Num);
        Resultado += Num;
    }
    printf("Resultado: %d\n",Resultado);
    return 0;
}