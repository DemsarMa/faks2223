#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct {
    char ime[20];
    int vpStev;
} stud1, stud2 = {"Janez", 123433523};


int main(void)
{
    //strcpy(stud1.ime, "Ivan");
    stud1 = stud2;
    stud2.ime[0] = 'j';

    printf("%s", stud1.ime);

    return 0;
}