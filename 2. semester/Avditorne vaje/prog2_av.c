#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("Zapiši datum v ISO formatu (YYYY-MM-DD): ");
int y, m, d;
scanf("%d-%d-%d", &y, &m, &d);
printf("Datum je %d. %d. %d\n", d, m, y);

return 0;

}