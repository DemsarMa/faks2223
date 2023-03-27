#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <complex.h>
#include "./bitmap.h"

#define DIM 1000
unsigned char slika[DIM][DIM];

float complex resi_enacbo(float complex zn);

int main(void)
{
    float complex z;
    float complex   zmin1 = 1, //rešitev 1. -> barva 80
                    zmin2 = -0.5 + sqrt(3) / 2 * I, //rešitev 2. -> barva 160
                    zmin3 = -0.5 - sqrt(3) / 2 * I; //rešitev 3. -> barva 240
    int i, j;
    float zi, zj;
    int count = 0;
    for (i = 0, zi = 500; i < DIM; i++, zi -= 2*500 / DIM)
    {
        for (j = 0, zj = -500; j < DIM; j++, zj += 2*500 / DIM)
        {
            z = zi + zj * I;
            z = resi_enacbo(z);
            if (cabs(zmin1 - z) < 0.0001) {
                slika[i][j] = 80*count;
            } else if (cabs(zmin2 - z) < 0.0001) {
                slika[i][j] = 160*count;
            } else if (cabs(zmin3 - z) < 0.0001) {
                slika[i][j] = 240*count;
            } else
            slika[i][j] = 100;
        }
    }
    //printf("Rešitev 1: %f + %fi\n", creal(z), cimag(z));
    shraniBMP(slika, DIM, DIM, "slika.bmp");
    system("display slika.bmp");
    return 0;
}

float complex resi_enacbo(float complex zn)
{
    float complex zn1; // Začetni približek korena števila d

    int count = 0;
    while(1){
        zn1 = zn - (cpow(zn, 3) - 1) / (3 * cpow(zn, 2));
        if (cabs(zn1 - zn) < 0.0001) {
            break;
        }
        zn = zn1;
        count++;
        
    }

    return zn1;
}