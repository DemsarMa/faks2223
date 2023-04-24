#include <stdio.h>
#include <stdlib.h>
#define DIM 10000

int main() {
    char *k;
    k = malloc(sizeof(char) * DIM * DIM);

    if (k == NULL) {
        printf("Napaka pri alociranju pomnilnika!");
        return 1;
    }

    int i;
    for (i = 0; i < DIM * DIM; i++) {
        k[i] = rand();
    }
    getchar();
    free(k);
    return 0;
}