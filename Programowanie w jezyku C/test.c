#include<stdio.h>
#include <stdlib.h>

void zmien(int *a,int *b)
{
    int *wska = &a;
    int *wskb = &b;

    *a = 34;
    *b = 545;
    // printf("\nA: %d\nB: %d",*a,*b);
}

int main()
{
    // float *tab = malloc(sizeof(float)*2);
    // float *tabwsk = &tab;
    int a = 5;
    int b = 10;
    int *wska = &a;
    int *wskb = &b;
    printf("A: %d\n", a);
    printf("B: %d", b);
    zmien(wska,wskb);
    printf("A: %d\n", a);
    printf("B: %d", b);
}