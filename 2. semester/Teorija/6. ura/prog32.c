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

int main(void)
{
    int x = 2, y = 5;
    menjaj(&x, &y);
    printf("%d %d", x, y); 
    return 0;
}