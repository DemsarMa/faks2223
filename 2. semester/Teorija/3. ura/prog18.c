#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int dvojisko_st = 1011001;
    int decimalno_st = 0;
    int i = 0;
    while (dvojisko_st != 0)
    {
        decimalno_st += (dvojisko_st % 10) * pow(2, i);
        dvojisko_st /= 10;
        i++;
    }
    printf("%d", decimalno_st);
    return 0;
}