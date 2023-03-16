#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int sestej(int a, int b) {
    return a + b;
}

int main(void)
{
    int x = 10, y = 20;
    x = sestej(x, y);
    printf("%d\n", x);
    return 0;
}