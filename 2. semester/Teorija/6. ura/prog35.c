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
    double (*potenca)(double, double);
    potenca = pow;
    printf("%p\n", main);
    printf("%f\n", potenca(2, 4));
    printf("%p %p\n", pow, potenca);
    return 0;
}