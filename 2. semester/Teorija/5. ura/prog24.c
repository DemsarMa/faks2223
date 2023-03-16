#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    float x = 5.12;
    printf("%f %p\n", x, &x);
    //spremenljivka x vzame 4 bajte v pomnilniku, začne se s %p in štejemo po šestnajstiškem sistemu

    float y = 5.12;
    float *k; //kazalčna spremenljivka
    k = &y;
    y = 44;
    printf("%f %p\n", y, k); //poskusi tudi z & na k

    return 0;
}