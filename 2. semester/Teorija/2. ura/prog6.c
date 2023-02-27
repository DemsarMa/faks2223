#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int x, y = 100;

printf("%d\n", y++); //najprej bo 100, nato pa bo 101. Če je ++y, bo 101, nato tudi 101.
printf("%d\n", y);
return 0;

}