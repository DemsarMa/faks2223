#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void menjaj(int *a, int *b){
    int pom = *a;
    *a = b;
    *b = pom;
}

double *max(double tab[]) {
    double *m = tab;
    for (int i = 0; tab[i] >= 0; i++) {
        if (tab[i] > *m) {
            m = &tab[i];
        }
    }
    return m;
}

int main(void)
{
    double t[] = {1, 2, 5, 2, 6, -1};
    printf("%lf\n", *max(t));
    return 0;
}