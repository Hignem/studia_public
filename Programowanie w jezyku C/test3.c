#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int *wsk = &a;
    printf("wskaznik %d\n", a);
    printf("wskaznik %d\n", wsk);
    int **wsk2 = &wsk;
    // int a =7;
    int *wsk22 = &a;

    // printf("wskaznik %d\n", wsk2);
    // printf("wskaznik %d\n", *wsk2);
    // printf("wskaznik %d\n", **wsk2);

    // printf("wskaznik %d\n", wsk);
    printf("wskaznik %d\n", a);
    printf("wskaznik %d\n", wsk22);





}