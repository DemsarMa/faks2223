#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int i, n;
    for (i = 0; i < 5; i++) {
        printf("Vnesi stevilo: ");
            if (scanf("%d", &n) == 0) {
                printf("Napaka pri vnosu stevila.\n");
                while (getchar() != '\n');
                i--;                
            }
        else {
            printf("Vnesel si stevilo: %d\n", n);
        }
    }
    return 0;
}