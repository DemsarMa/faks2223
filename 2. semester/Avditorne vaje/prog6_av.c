#include <stdio.h>
#include <stdlib.h>

int prestejRazlicne(int t[], int len);
int odstraniDuplikate(int t[], int len);

int main()
{

    int t[13] = {5, 9, 5, 2, 6, 77, 15, 5, 5, 77, 6, 2, 8};
    printf("Imamo %d unikatnih števil.\n", prestejRazlicne(t, 13));

    odstraniDuplikate(t, 13);
    int i;
    for (i = 0; i < 13; i++)
    {
        printf("%d, ", t[i]);
    }
    return 0;
}

int odstraniDuplikate(int t[], int len)
{
    int i, j, count = 0;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (t[i] == t[j])
            {
                break;
            }
        }
        if (j == len)
        {
            count++;
            printf("%d\n", t[i]);
            t[count-1] = t[i];
        }
    }
    return count;
}

int prestejRazlicne(int t[], int len)
{
    int i, j, count = 0;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (t[i] == t[j])
            {
                break;
            }
        }
        if (j == len)
        {
            count++;
            printf("%d\n", t[i]);
        }
    }
    return count;
}