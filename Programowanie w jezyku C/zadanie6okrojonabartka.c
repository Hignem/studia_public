#include <stdio.h>
#include <stdlib.h>
struct Color //Zad_6
{
    int valueHEX;
    int valuesRGB[3];
    char *name;
};

struct Color *scanColor() //Zad_6
{
    struct Color *nowy;
    nowy = malloc(sizeof(struct Color));
    printf("HEX: "); scanf("%d", &nowy->valueHEX); printf("\n");
    int i = 0;
    while(i < 3)
    {
        printf("RGB[%d]: ", i); scanf("%d", &nowy->valuesRGB[i]); printf("\n");
        i++;
    }
    nowy->name = malloc(100);
    printf("name: "); scanf("%s", nowy->name); printf("\n");
    return nowy;
}
struct Color* colors[50]; //Zad_6
void printColor(struct Color *f1)
{
    printf("HEX: %d, ", f1->valueHEX);
    int i = 0;
    while(i < 3)
    {
        printf("RGB[%d]: %d, ", i, f1->valuesRGB[i]);
        i++;
    }
    printf("Name: %s\n ", f1->name);
}
void printColors(struct Color **f1, int len) //Zad_6
{
    int i = 0;
    while(i < len)
    {
        printColor(f1[i]);
        i++;
    }
}
void freeColor(struct Color *f1)
{
    free(f1->name);
    free(f1);
}

int main()
{
    int i = 0;
    while(i < 3)
    {
        colors[i] = scanColor();
        i++;
    }
        printColors(colors, 3);
        i = 0;
        while(i < 3)
    {
        freeColor(colors[i]);
        i++;
    }
}