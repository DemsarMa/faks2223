#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char pretvori(des) {
    return "0123456789ABCDEF"[des];
}

int main(void)
{
    printf("%c", pretvori(15));

    return 0;
}