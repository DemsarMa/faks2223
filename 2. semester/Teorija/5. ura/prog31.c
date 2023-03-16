#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int stej() {
    static int x = 0; //samo enkrat inicializirana
    x++;
    return x;
}

int main(void)
{
    stej();
    stej();
    stej();
    printf("%d", stej());
    return 0;
}