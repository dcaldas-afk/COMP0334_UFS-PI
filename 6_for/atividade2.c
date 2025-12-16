#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int ac, char **av) {
    int n = atoi(av[1]);
    for (int i = 1; i <= 10; i++)
        printf("%d: %.0f\n", i, pow(i,n));
    return 0;
}