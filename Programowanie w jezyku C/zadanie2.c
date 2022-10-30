#include <stdio.h>

int main() 
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
                break;
            
            case 2:
                printf(" \n *** Wybrano opcje %d ***\n \n", wybranaOpcja);
                break;
                
            case 3:
                printf(" \n *** Wybrano opcje %d ***\n \n", wybranaOpcja);
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