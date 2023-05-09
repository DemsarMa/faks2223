#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 15;
    
    x = ~x + 1; //dvojiški komplement

    printf("%d\n", x); //ipisalo se bo -15
    
    return 0;
}