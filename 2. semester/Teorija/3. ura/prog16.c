#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int stevec = 1;
    for (int i = 3, korak = 3; i % 12; i += korak, stevec++)
    {
    }

    printf("stevec = %d\n", stevec);

    // for (stavek); ne naredi nič, for (stavek) {} tudi ne, če damo printf v stavek, se izpiše 123456789101112 in se program zaključi
    return 0;
}