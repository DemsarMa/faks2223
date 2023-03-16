#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int povecaj(int x) {
    x++;
    return x;
}

int main(void)
{
    int x = 10, y = 20;
    y = povecaj(x);
    printf("%d %d\n", x, y);
    return 0;
}