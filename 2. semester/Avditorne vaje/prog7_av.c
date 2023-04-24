#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp; //ustvari kazalec za datoteko
    char znak;
    char glavaTabele[1000] = {0};
    char vrsticaTabele[1000] = {0};
    char *k = glavaTabele; //umeri kazalec na začetek tabele
    fp = fopen("neki.csv", "r");
    if (fp == NULL)
    {
        printf("Napaka pri odpiranju datoteke!");
        return 1;
    }
    
    while (fscanf(fp, "%c", &znak) != EOF)
    {
        if (znak == '\n')
        {
            printf("%s\n", glavaTabele);
            printf("%s\n", vrsticaTabele);
            k = glavaTabele;
        }
        else
        {
            *k = znak; if(znak == ',') {*k = '\t'; };
            k++;
        }
    }
    

    return 0;
}