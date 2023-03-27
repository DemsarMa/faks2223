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

double *maks(double *a, double *b){
    return *a > *b ? a : b;
}

int main(void)
{
    double x = 13, y = 5;
    *maks(&x, &y) = 123.45;
    printf("%f %f", x, y); 
    return 0;
}