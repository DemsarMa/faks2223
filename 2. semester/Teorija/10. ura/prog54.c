#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short x = 0xAC32; //MSB predstavlja predznak, 1 = negativno, 0 = pozitivno
    //v primeru, da je samo short, bo prevajalnik samodejno dodal FFFF pred število (odvisno od prevajalnika)

    //printf("%04X", x);
    printf("%hu\n", x);
    x = x >> 1;
    printf("%hu", x); // uporabi tudi %hd



    return 0;
}