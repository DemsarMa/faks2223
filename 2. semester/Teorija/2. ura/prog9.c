#include <stdio.h>
#include <stdlib.h>

int main(void)
{

float x = 10;

x != 5 || (x = 16); //računa se od leve proti desni.
printf("%f\n", x);

return 0;

}