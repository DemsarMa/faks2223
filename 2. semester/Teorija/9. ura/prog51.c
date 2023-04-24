#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n;
    int *k;

    scanf("%d", &n);
    k = (int *)malloc(n * sizeof(int));
    if (k == NULL)
    {
        printf("Napaka pri alociranju pomnilnika!");
        exit(-1);
    }
    k[n - 1] = 44;
    k[0] = 2;
    printf("%d %d", k[0], k[n - 1]);
    free(k);

    return 0;
}