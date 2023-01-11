#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Number
{
    int integerValue;
    char *wordValue;
    double doubleValue;
};

struct Number *scanNumber()
{
    struct Number *array;
    array = malloc(sizeof(struct Number));
    printf("Podaj wartosc integerValue:"); scanf("%d",&array->integerValue);
    array->wordValue = malloc(100);
    printf("Podaj wartosc wordValue:"); scanf("%s",array->wordValue);
    printf("Podaj wartosc doubleValue:"); scanf("%lf",&array->doubleValue);

    return array;
}

void freeNumber(struct Number *f1)
{
    free(f1->wordValue);
    free(f1);
}

void printNumber(struct Number *f1)
{
    printf("Wartosc integerValue: %d\n", f1->integerValue);
    printf("Wartosc wordValue: %s\n", f1->wordValue);
    printf("Wartosc doubleValue: %lf\n", f1->doubleValue);
}

struct Number *numbers[50];

void printNumbers(struct Number **f1, int len)
{
    for (int i=0; i<len; i++)
    {
        printNumber(f1[i]);
    }
}

int main()
{
    int ilosc;
    printf("Podaj ile redordow chcesz wprowadzic:"); scanf("%d", &ilosc);
    for (int i=0; i<ilosc; i++)
    {
        numbers[i]=scanNumber();
    }
    printNumbers(numbers,ilosc);
    for (int i=0; i<ilosc; i++)
    {
        freeNumber(numbers[i]);
    }

    return 0;
}
