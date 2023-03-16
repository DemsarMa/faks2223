#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int predznak(int x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
}

int main(void)
{
    printf("%d\n", predznak(10));
    return 0;
}