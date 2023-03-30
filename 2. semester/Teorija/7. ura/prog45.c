#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *k;
    k = "Hello";

    k[0] = 'H'; //Nedoločeno obnašanje, ker je k const
    printf("%d", "Hello" == "Hello"); //%s vrne vrednost kazalca k, %p pa naslov kazalca k

    return 0;
}