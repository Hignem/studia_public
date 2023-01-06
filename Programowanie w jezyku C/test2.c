#include<stdio.h>
#include <stdlib.h>

void wyswietl (float **wsktab)
{
    printf("%f", wsktab[0]);
}

int main()
{
    float *tab = malloc(sizeof(float));
    tab[0]=15;
    float **wsktab = &tab;
    wyswietl(wsktab);
    free(tab);
}