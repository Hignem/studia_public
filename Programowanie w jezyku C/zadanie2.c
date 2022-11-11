#include <stdio.h>

void printSquare(char a, int w)
{   
    printf("\n\n");
    for (int i = 0; i < w; i++)
    {
        
        for (int j=0; j < w; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    printf("\n\n");
}
void opcjaDruga()
{
    ;
}
void opcjaTrzecia()
{
    ;
}

void menu()
{
    int indeks = 173600;
    int rokStudiow = 1;
    int wybranaOpcja = -1;

    printf ("Program w jezyku C wykonany przez studenta o indeksie nr %d na %d roku studiow\n", indeks, rokStudiow);
    do
    {   
        printf("Menu:\n- opcja 1:\n- opcja 2:\n- opcja 3:\nWybierz opcje:"); 
        scanf("%d", &wybranaOpcja);
        switch(wybranaOpcja)
        {
            case 1:
                printf(" \n *** Wybrano opcje %d ***\n \n", wybranaOpcja);
                printf("Podaj znak: ");
                char znak;
                scanf("%c", &znak);
                printf("\nPodaj szerokosc: ");
                int szerokosc;
                scanf("%d", &szerokosc);
                printSquare(znak, szerokosc);
                break;
            
            case 2:
                printf(" \n *** Wybrano opcje %d ***\n \n", wybranaOpcja);
                opcjaDruga();
                break;
                
            case 3:
                printf(" \n *** Wybrano opcje %d ***\n \n", wybranaOpcja);
                opcjaTrzecia();
                break;
            
            case 0:
                printf(" \n *** Do widzenia ***\n \n");
                break;
            
            default:
                printf(" \n *** Wybrana opcja jest poza zakresem ***\n \n");
            
        }
    }
    while(wybranaOpcja!=0);
}

int main() 
{

menu();

}