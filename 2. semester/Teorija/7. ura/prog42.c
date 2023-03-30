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

void map(double t[], double (*f)(double)) {
    for (int i = 0; t[i] >= 0; i++) {
        t[i] = f(t[i]);
    }
}

int main(void)
{
    double t[] = {1, 4.5, 9.9, 16, 25, -1};
    
    map(t, ceil);
    map(t, sqrt);

    for(int i = 0; t[i] >= 0; i++) {
        printf("%f ", t[i]);
    }

    return 0;
}