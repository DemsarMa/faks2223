#include <stdio.h>
#include <stdlib.h>

/*int main(void)
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
        return 0;
}*/

/*int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j > i) break;
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}*/

/*int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("    ");
            if (j < i)
                continue; // continue preneha z trenutno iteracijo in takoj preveri pogoj za naslednjo iteracijo
            printf("\b\b\b\b%4d", i * j);
            // 4 \b uporabimo, da poravnamo števila na desno (desna poravnava)
        }
        printf("\n");
    }
    return 0;
}*/

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("    ");
            if (i > 5)
                goto ven; // goto preneha z trenutno iteracijo in takoj preveri pogoj za naslednjo iteracijo
            // DISCLAIMER: goto je zelo nevarna konstrukcija, ki se jo ne uporablja v praksi
            printf("\b\b\b\b%4d", i * j);
        }
        printf("\n");
    }
ven:
    return 0;
}