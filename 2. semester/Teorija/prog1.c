#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int x, p, rezultat;
    printf("Vnesi osnovo: ");
    scanf("%d", &x);
    printf("Vnesi eksponent: ");
    scanf("%d", &p);
    rezultat = pow(x, p);
    printf("%d na %d je enako: %d", x, p, rezultat);
    return 0;
}