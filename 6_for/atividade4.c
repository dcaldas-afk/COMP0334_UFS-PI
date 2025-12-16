/*Escrever programa para ler N números e identificar quantos
estão dentro do intervalo entre 10 e 20, e quantos estão fora
desse mesmo intervalo.
*/

#include <stdio.h>

int main() {
    int N, valor;
    int dentro = 0, fora = 0;
    printf("Digite o número N.\nResposta: "); scanf("%d", &N);
    for (int Cont = 1; Cont <= N; Cont++) {
        printf("Digite o valor #%d: ", Cont);
        scanf("%d", &valor);
        if (valor >= 10 && valor <= 20)
            dentro++;
        else
            fora++;
    }
    printf("Números dentro do intervalo: %d\n", dentro);
    printf("Números fora do intervalo: %d\n", fora);
    return 0;
}