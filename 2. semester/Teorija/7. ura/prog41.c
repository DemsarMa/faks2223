#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void menjaj(double *a, double *b){
    int pom = *a;
    *a = *b;
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

int prim (const void *a, const void *b) {
    const double *x, *y;
    x = a;
    y = b;
    return (*x > *y) - (*x < *y);
    }

int main(void)
{
    double t[] = {1, 2, 5, 2, 6, -1};
    
    qsort(t, 5, sizeof(double), prim); // lahko tudi sizeof t / sizeof t[0] razen, da mora biti t[0] >= 0 sedaj i < sizeof t / sizeof t[0]

    for(int i = 0; t[i] >= 0; i++) {
        printf("%f ", t[i]);
    }

    return 0;
}