#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float re;
    float im;
} kompleksno;

kompleksno produkt(kompleksno x, kompleksno y);

int main()
{
    kompleksno z = {5, -1.8};

    printf("z = %f + %fi\n", z.re, z.im);
    return 0;
}

kompleksno produkt(kompleksno x, kompleksno y)
{
    kompleksno z;
    r.re = x.re * y.re - x.im * y.im;
    r.im = x.re * y.im + x.im * y.re;
    return z;
}