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

int main(void)
{
    double t[] = {1, 2, 5, 2, 6, -1};
    for(int i = 0; t[i] >= 0; i++) {
        menjaj(&t[i], max(&t[i]));
    }
    for(int i = 0; t[i] >= 0; i++) {
        printf("%f ", t[i]);
    }

    return 0;
}