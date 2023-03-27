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
    /*int tab[5] = {234, 23};
    printf("%p\n", tab);
    printf("%d\n", *(tab + 1));
*/
    int tab[5] = {234, 23, 786};
    int *k;
    k = tab;

    printf("%d\n", *k);
    k++;
    printf("%d\n", *(k + 1));

    return 0;
}