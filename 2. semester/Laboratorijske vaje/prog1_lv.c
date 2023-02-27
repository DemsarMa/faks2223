#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int start_day;
    int days;
    printf("Vnesi število dni v mesecu: ");
    scanf("%d", &days);
    printf("Vnesi prvi dan v mesecu (1 - pon, 2 - tor ... 7 - ned): ");
    scanf("%d", &start_day);

    int day = 1;
    int i;
    printf(" P  T  S  Č  P  S  N\n");
    /*for (i = 1; i < start_day; i++) //če ne uporabiš while
    {
        printf("   ");
    }
    for (i = start_day; i <= 7; i++)
    {
        printf("%2d ", day);
        day++;
    }
    printf("\n");
    for (i = 1; i <= 7; i++)
    {
        printf("%2d ", day);
        day++;
    }
    printf("\n");
    for (i = 1; i <= 7; i++)
    {
        printf("%2d ", day);
        day++;
    }
    printf("\n");
    for (i = 1; i <= 7; i++)
    {
        printf("%2d ", day);
        day++;
    }
    printf("\n");
    for (i = 1; i <= 7; i++)
    {
        if (day <= days)
        {
            printf("%2d ", day);
            day++;
        }
        else
        {
            printf("   ");
        }
    }*/

    while (day <= days)
    {
        for (i = 1; i < start_day; i++)
        {
            printf("   ");
        }
        for (i = start_day; i <= 7; i++)
        {
            if (days < 7)
            {
                printf("%2d ", day);
                day++;
            }
            else if (day <= days)
            {
                printf("%2d ", day);
                day++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        start_day = 1;
    }

    return 0;
}