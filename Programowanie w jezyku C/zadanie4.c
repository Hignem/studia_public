#include<stdio.h>

float mean(float array[], int len)
{	
	float suma;
	for (int i = 0 ; i < len ; i++)
	{
		suma+=array[i];
	}

	return suma;
}

void printArray(float array[], int len)
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
	float tablica [10];
	printf("Podaj nastepujace wartosci tablicy: \n");
	for (int i = 0 ; i <10; i++)
	{	
		printf("Wartosc %d:", i+1);
		float wartosc; 
		scanf("%f", &wartosc);
		tablica[i]=wartosc;
	}
	printArray(tablica, 10);
	printf("\nSuma: %f\n\n", mean(tablica, 10));

}

int opcja3(){}

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
			printf("Menu:\n- opcja 1:\n- opcja 2:\n- opcja 3:\nWybierz opcje:");
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
