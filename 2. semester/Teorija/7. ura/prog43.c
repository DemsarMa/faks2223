#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char niz[100] = "Hello world!";
    char znak = 'l';
    printf("%s\n", &niz[3]); //uporabi strlen(niz), da izpiše dolžino niza, &niz[3] pa da izpiše od 4. znaka naprej.
    //Ne uporabljaj strlen v printf, kadar uporabljaš %s, saj pomeni, da hočeš gledati naslov 3, če je &niz[3].
    return 0;
}