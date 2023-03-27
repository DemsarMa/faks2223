#include <stdio.h>
#include <stdlib.h>

int main()
{

char znak; //8-bit
int stevec_oklepajev = 0;

printf("Vnesi izraz: ");

while(1){
    scanf("%c", &znak);
    if(znak == '0') break;
    printf("%c\n", znak);
    if(znak == '(') stevec_oklepajev++;
    if(znak == ')') stevec_oklepajev--;
    if(stevec_oklepajev < 0){
        printf("Napaka: prevec zapirajočih oklepajev\n");
        break;
    }
    if(stevec_oklepajev > 0){
        printf("Napaka: prevec odpirajočih oklepajev! Namig: %d\n", stevec_oklepajev);
        break;
    }
    if(stevec_oklepajev == 0){
        printf("Oklepaji OK.\n");
        break;
    }
    return 0;
}

return 0;

}