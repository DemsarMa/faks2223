#include <stdio.h>
#include <stdlib.h>

int main()
{

int start, stop, ozn_start, ozn_stop;
printf("Območje za izpis: ");
scanf("%d %d", &start, &stop);
printf("Označi vrednosti: ");
scanf("%d %d", &ozn_start, &ozn_stop);

while (start <= stop)
{
    if (start >= ozn_start && start <= ozn_stop)
    {
        printf("*");
    }
    printf("%d ", start);
    start++;
}
printf("\n");

return 0;

}