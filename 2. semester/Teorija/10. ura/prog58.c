#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//memory dump

#define VRST 8
typedef unsigned char BYTE;

int main(void)
{
    unsigned int naslov;
    BYTE *k; //oba namenjena za krmiljenje izpisovanja

    char *niz = "KONSTANTA";
    char t[] = "TABELA";
    short x = -128; //vsi trije so podatki
    
    printf("Naslov konstantnega niza: %p\n", niz);
    printf("Naslov spremenljivke x: %p\n", &x);
    printf("Naslov funkcije main: %p\n", main);
    printf("Vpiši naslov: ");
    scanf("%x", &naslov);
    k = (BYTE *)naslov;
    for (int i = 0; i < 10; i++) {
        printf("%08X", (unsigned int)k);
        for (int j = 0; j < VRST; j++) {
            printf("%02X ", k[i]);
        }
        printf(" ");
        for (int j = 0; j < VRST; j++) {
            if (isprint(k[j])) printf("%c", k[j]);
            else printf(".");
        }
        printf("\n");
        k += VRST;
    }

    //segmentation fault in Linux, should work on Win.

    return 0;
}