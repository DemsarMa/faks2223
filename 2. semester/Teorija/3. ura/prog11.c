#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float x = -4.163;

    x = x >= 0 ? x : -x;
    printf("%f", x);
    return 0;
}