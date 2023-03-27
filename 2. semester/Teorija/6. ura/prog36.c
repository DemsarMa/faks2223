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

int i;
int tab[5];

int main(void)
{
    for(int i = 1; i <= 5; i++) {
        tab[i] = 0;
        printf("a");
    }
    for(int i = 1; i <= 5; i++)
        printf("%d ", tab[i]);
    return 0;
}