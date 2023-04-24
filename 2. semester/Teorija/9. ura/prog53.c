#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char ime[20];
    int vpStev;
} student_t;


int main(void)
{
    student_t st1, letnik[180], *k;
    k = letnik;
    k++;
    (*k).ime;
    k->ime;
    return 0;
}