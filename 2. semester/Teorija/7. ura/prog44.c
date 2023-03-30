#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char niz1[10] = "Hello";
    char niz2[10] = "Hello";

    //strcpy(niz2, niz1);

    printf("%d", strcmp(niz1, niz2));

    return 0;
}

//strcmp primerja dve spremenljivki, če sta enaki, bo vrednost 0, če je ena večja od druge, bo vrednost večja od 0