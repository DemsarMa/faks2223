#include <stdio.h>
#include <stdlib.h>

int main(void)
{

float x = 14, y = 10;

if (x < 0) { // probaj x, tudi 0.00
    x++;
    y++;
}
else {
    x--;
    y--;
}

printf("%f %f\n", x, y);

return 0;

}