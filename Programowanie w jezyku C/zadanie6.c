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

float sum(float *pointer, int len)
{
	float suma;

	for(int i=0; i<len; i++)
	{
		suma+=pointer[i];
	}

	return suma;
}

float *getMemory(int n)
{
    float *tab = malloc(sizeof(float)*n);
    float **tabwsk = &tab;
    return *tabwsk;
}

void freeMemory(float *pointer)
{
	float **wsk = &pointer;
    free(pointer);
}

float mean(float array[], int len)
{	
	float suma;
	for (int i = 0 ; i < len ; i++)
	{
		suma+=array[i];
	}

	return suma;
}

void printArrayPointer(float array[], int len)
{
	for (int i = 0 ; i<len; i++)
	{
		printf("\nWartosc %d: %f", i+1, array[i]);

	}
	printf("\n");
}

float meanPointer(float *array, int len)
{	
	float suma;
	for (int i = 0 ; i < len ; i++)
	{
		suma+=array[i];
	}

	return suma;
}

void printArray(float *array, int len)
{
	for (int i = 0 ; i<len; i++)
	{
		printf("\nWartosc %d: %f", i+1, array[i]);

	}
	printf("\n");
}

void printSquare(char a, int w)
{   

    for (int i = 0; i < w; i++)
    {
        
        for (int j=0; j < w; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
}

int opcja2()
{
	// float tablica [10];
	// printf("Podaj nastepujace wartosci tablicy: \n");
	// for (int i = 0 ; i <10; i++)
	// {	
	// 	printf("Wartosc %d:", i+1);
	// 	float wartosc; 
	// 	scanf("%f", &wartosc);
	// 	tablica[i]=wartosc;
	// }
	// printArray(tablica, 10);
	// printf("\nSuma: %f\n\n", mean(tablica, 10));

	float *tab = malloc(sizeof(float)*10);
	printf("Podaj nastepujace wartosci tablicy: \n");
	for (int i = 0 ; i <10; i++)
	{	
		printf("Wartosc %d:", i+1);
		float wartosc; 
		scanf("%f", &wartosc);
		tab[i]=wartosc;
	}
	printArrayPointer(tab, 10);
	printf("\nSuma: %f\n\n", meanPointer(tab, 10));
	free(tab);

}

int opcja3()
{
    printf("Podaj rozmiar tablicy: ");
    int rozmiartab;
    scanf("%d",&rozmiartab);
    float *tabwsk = getMemory(rozmiartab);
    for(int i=0; i<rozmiartab; i++)
    {
		printf("Podaj wartosc %d szufladki: ",i+1);
		float liczba;
		scanf("%f",&liczba);
		tabwsk[i]=liczba;
		// printf("Wartosc: %f",tabwsk[i]);
    }
    // printf("wskaznik tablicy: %d", tabwsk);

	printf("\nSuma elementow tablicy: %f\n\n",sum(tabwsk,rozmiartab));

    freeMemory(tabwsk);
}

int opcja4()
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
}

void menu(wybranaOpcja) {
	switch (wybranaOpcja)
	{
	case 1:
		printf("\n\n***Wybrano opcje 1***\n\n");
		char znak;
		int szerokosc;
		printf("Podaj znak: ");
		scanf("\n %c", &znak);
		printf("Podaj szerokosc: ");
		scanf("\n %d", &szerokosc);
		printSquare(znak, szerokosc);
		printf("\n\n");
		break;
	case 2:
		printf("\n***Wybrano opcje 2***\n\n");
		opcja2();
		break;
	case 3:
		printf("\n***Wybrano opcje 3***\n\n");
		opcja3();
		break;
	case 4:
		printf("\n***Wybrano opcje 4***\n\n");
		opcja4();
		break;		
	default:
		printf("\n***Wybrano opcje poza zakresem***\n\n");
	}
}

int main()
{
	int indeks = 173600;
	int rokStudiow = 1;
	int wybranaOpcja = -1;
	int i;
	printf("Program w jezyku C wykonany przez studenta o indeksie nr %d na %d roku studiow\n", indeks, rokStudiow);
	for (;;)
	{
		if (wybranaOpcja != 0)
		{
			printf("Menu:\n- opcja 1:\n- opcja 2:\n- opcja 3:\n- opcja 4:\nWybierz opcje:");
			scanf("%d", &wybranaOpcja);
			menu(wybranaOpcja);
		}
		else
		{
			break;
		}
	}
	printf("***Do widzenia***\n");
}
