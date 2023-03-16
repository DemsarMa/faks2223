#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x = 10;
    printf("%d %d %d\n", x++, x++, x);
    x = 10;
    printf("%d %d %d\n", x, x++, x++);
    return 0;
}