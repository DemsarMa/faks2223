#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float pi;

    // pri pisanju nikoli , ampak . za decimalke, saj vejica je vejični operator
    // poskusi pi = (3,141592), (pi = 3,141592), (pi = 3.141592)
    pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    printf("pi = %f\n", pi);
    return 0;
}