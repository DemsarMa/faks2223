#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define VR 2
#define ST 3

//manjka del kode

int main(void)
{
    int m[VR][ST] = {{1, 2, 3}, {4, 5, 6}};

    //int (*k)[ST];
    int najv = *maks((int *)m, ST * VR);
    printf("Najvecja vrednost je %d.\n", najv);

/*
    for (int i = 0; i < VR; i++)
    {
        for (int j = 0; j < ST; j++)
        {
            printf("%4d ", k[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}