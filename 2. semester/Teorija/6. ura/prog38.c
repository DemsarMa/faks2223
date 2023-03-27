#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*
void menjaj(int *a, int *b){
    int pom = *a;
    *a = b;
    *b = pom;
}*/

int main(void)
{
    int tab[5] = {234, 23, 786};
    int *k;
    k = tab;

    printf("%lu %lu\n", sizeof k, sizeof *k);

    return 0;
}