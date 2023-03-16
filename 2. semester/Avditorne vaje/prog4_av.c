#include <stdio.h>
#include <stdlib.h>

int main()
{

int stevilo, desetica, enica;
printf("-----------------------------------------\n");
printf("Vnesi število med 30 in 99: ");
scanf("%d", &stevilo);

desetica = stevilo / 10;
enica = stevilo % 10;

printf("Desetica: %d Enica: %d\n", desetica, enica);
//digit to word

switch (enica) {
case 1: printf(" ena"); break;
case 2: printf(" dve"); break;
case 3: printf(" tri"); break;
case 4: printf(" štiri"); break;
case 5: printf(" pet"); break;
case 6: printf(" šest"); break;
case 7: printf(" sedem"); break;
case 8: printf(" osem"); break;
case 9: printf(" devet"); break;
}

if (enica > 0) {
    printf("in");
}

switch (desetica)
{
case 3: printf("trideset"); break;
case 4: printf("štirideset"); break;
case 5: printf("petdeset"); break;
case 6: printf("šestdeset"); break;
case 7: printf("sedemdeset"); break;
case 8: printf("osemdeset"); break;
case 9: printf("devetdeset"); break;
default: printf("Napaka"); break;
}

//sound of the number


printf("\n-----------------------------------------");
return 0;

}