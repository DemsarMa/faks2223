#include <stdio.h>
#include <stdlib.h>

//zapakiranje bajtov

int tab[] = {3, 8, 9, 1, 3, 0, 3, 6};

unsigned long zapakiraj(int *t, int n) {
    unsigned long vredn = t[0];
    for (int i = 1; i < n; i++) {
        vredn <<= 4;
        vredn = vredn | t[i];
    }
    return vredn;
}

void razpakiraj(unsigned long vredn, int *t, int n) {
}

int main(void)
{
    printf("%08X\n", zapakiraj(tab, 8));

    //zapakiranje tabele v 32-bitni podatek

    
    return 0;
}