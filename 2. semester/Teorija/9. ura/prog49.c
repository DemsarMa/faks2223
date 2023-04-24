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
    char imena[][20] = {"prosinec", "svečan", "sušec"};

    imena[1][0] = 'S';
    printf("%s", imena[1]);
    return 0;
}