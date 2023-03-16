#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float koren(float d)
{
    float koren_zacetni = 1; // Začetni približek korena števila d
    float koren_nov;

    do
    {
        koren_nov = koren_zacetni - (koren_zacetni * koren_zacetni - d) / (2 * koren_zacetni);
        koren_zacetni = koren_nov;
    }
    while (fabs(koren_zacetni * koren_zacetni - d) > 0.0001);

    return koren_zacetni;
}

int main(void)
{
    /*prvi sklop naloge
    float d = 2.0;              // Vhodno število
    float koren_zacetni = 35.0; // Začetni približek korena števila d
    float koren_nov;

    while (koren_zacetni * koren_zacetni - d > 0.0001)
    {
        koren_nov = koren_zacetni - (koren_zacetni * koren_zacetni - d) / (2 * koren_zacetni);
        koren_zacetni = koren_nov;
    }
    printf("Kvadratni koren stevila 2 je %f\n", koren_zacetni);*/

    printf("Vnesi stevilo: ");
    float d;
    scanf("%f", &d);
    printf("Kvadratni koren stevila %f je %f\n", d, koren(d));

    return 0;
}