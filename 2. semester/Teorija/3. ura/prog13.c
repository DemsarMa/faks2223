#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int stevec = 0;
    int vnos;
    while (1)
    {
        printf("Vnesi število zabojev: ");
        scanf("%d", &vnos);
        if (vnos < 0)
        {
            break;
        }
        stevec += vnos;
    }
    printf("Skupno število zabojev: %d", stevec);
    return 0;
}