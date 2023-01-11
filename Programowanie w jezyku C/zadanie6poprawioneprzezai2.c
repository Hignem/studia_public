#include<stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[100];

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
    printf("Podaj wartosc integerValue:"); 
    fgets(buf,sizeof buf, stdin);
    sscanf(buf, "%d",&array->integerValue);
    array->wordValue = malloc(100);
    printf("Podaj wartosc wordValue:"); 
    fgets(array->wordValue, 100, stdin);
    array->wordValue[strcspn(array->wordValue, "\r\n")] = 0;
    printf("Podaj wartosc doubleValue:"); 
    fgets(buf,sizeof buf, stdin);
    sscanf(buf, "%lf",&array->doubleValue);
    return array;
}

void freeNumber(struct Number *f1)
{
    free(f1->wordValue);
    f1->wordValue = NULL;
    free(f1);
    f1 = NULL;
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
    printf("Podaj ile redordow chcesz wprowadzic:"); 
    fgets(buf,sizeof buf, stdin);
    sscanf(buf, "%d", &ilosc);
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
