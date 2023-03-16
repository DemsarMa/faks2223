#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int ocena = 10;

    switch (ocena)
    {
    case 10:
        printf("Odličen\n");
        break;
    case 9:
        printf("Prav dober\n");
        break;
    case 8:
        printf("Prav dober\n");
        break;
    case 7:
        printf("Dober\n");
        break;
    case 6:
        printf("Zadosten\n");
        break;
    default:
        printf("Nezadosten\n");
        break;
    }

    return 0;
}