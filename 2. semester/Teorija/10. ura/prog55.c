#include <stdio.h>
#include <stdlib.h>

//operacija & (AND), | (OR), ^ (XOR), ~ (NOT)

int main(void)
{
    unsigned short x = 0xAC32;

    //x = x && 0xF0C3; //& bo vse bite pregledal, && pa samo razliko, če obstaja
    //x = x | 0xF0C3; //ALI (OR)
    //x = ~x; //NOT
    //x = x ^ 0xF0C3; //XOR
    printf("%04X\n", x);
    
    return 0;
}