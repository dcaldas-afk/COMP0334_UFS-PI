#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double pot(double n, double exp) {
    double casoBase = 1;
    int e = exp < 0 ? -exp : exp;

    for (int i = 0; i < e; i++)
        casoBase *= n;
    double res = exp < 0 ? 1/casoBase : casoBase;
    return res;
}

int main(int ac, char **av) {
    double n = atoi(av[1]);
    for (int i = 1; i <= 10; i++)
        printf("%d: %.0f\n", i, pot(n,i));
    return 0;
}