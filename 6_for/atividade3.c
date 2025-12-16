#include <stdio.h>

int main() {
    int Num, lim;
    int Resultado = 0;
    printf("Quantos números você quer somar?\nResposta: "); scanf("%d", &lim);
    for (int Cont = 1; Cont <= lim; Cont++) {
        printf("Digite o valor #%d: ", Cont);
        scanf("%d", &Num);
        Resultado += Num;
    }
    printf("Resultado: %d\n",Resultado);
    return 0;
}