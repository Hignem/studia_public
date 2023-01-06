#include <stdio.h>
#include <stdlib.h>
void printNextNChars(int n, char first){

    int wynik = (int)(first);
    for(int i = 0; i<n; i++){
        wynik++;
        printf(" %c", (char)(wynik));
    }
    printf("\n");
}
void charToTab(char *array, int len){
    char wartosc;
    printf("Prosze wpisac znaki\n");
    for(int i=0; i < len; i++){
        scanf(" %c", &wartosc);
        *(array+i) = wartosc;
    }
};
int lowerChars(char *array, int len){
    for(int i=0; i < len; i++){
        if(*(array+i)>='A' && *(array+i)<='Z'){
            *(array+i) += 32;
        }
    }
    return 0;
};

float *getMemory(int n){
    return malloc(sizeof(float)*n);
}

void freeMemory(float * pointer){
    free(pointer);
}

int maxIndex(float *array, int len){
    int maxIndex = 0;
    float max = *array;
    for (int i = 1; i < len; i++) {
        if (*(array+i) > max) {
            max = *(array+i);
            maxIndex = i;
        }
    }
    return maxIndex;
}

void mainManu(){
    int wybranaOpcja = -1;
    do{
        int indeks = 173674;
        int rokStudiow = 1;
        printf ("Program w jezyku C wykonany przez studenta o indeksie nr %d na %d roku studiow\n", indeks, rokStudiow);
        printf("Menu:\n- opcja 1:\n- opcja 2:\n- opcja 3:\nWybierz opcje:");
        scanf(" %d", &wybranaOpcja);
        getchar();
        switch (wybranaOpcja) {
            case 1:
                printf("Wybrano opcje nr 1\n");
                printf("Prosze podac znak rozpoczynajacy: ");
                char first;
                int n;
                scanf("%c", &first);
                printf("Prosze podac ilosc liczb ktore pokaze program po wpisanym znaku: ");
                scanf("%d", &n);
                printNextNChars(n, first);
                break;
            case 2:
                printf("Wybrano opcje %d \n", wybranaOpcja);
                char *array = malloc(25 * sizeof(char));
                charToTab(array, 25);
                for(int i=0; i<25; i++){
                    printf("%c", array[i]);
                }
                printf("\n");
                lowerChars(array, 25);
                for(int i=0; i<25; i++){
                    printf("%c", array[i]);
                }
                printf("\n");
                free(array);
                break;
            case 3:
                printf("Wybrano opcje %d \n", wybranaOpcja);
                int len;
                printf("Podaj rozmiar tablicy \n");
                scanf("%d", &len);
                float *tab = getMemory(len);
                for (int g = 0; g < len; g++) {
                    printf("Wprowadz znak numer %d: \n", g + 1);
                    scanf(" %f", &tab[g]);
                }
                int c = maxIndex(tab, len);
                printf("Najwieksza wartosc znajduje sie na indeksie %d\n", c);
                freeMemory(tab);
                if (tab==NULL)
                {
                    printf("Wyczyszczono pamiec");
                }
                else
                {
                    printf("Nie wyczyszczono");
                }
            case -1:
                printf("Do widzenia\n");
                break;
            default:
                printf("Podano liczbe znajdujaca sie poza zakresem\n");
                break;
        }
    } while (wybranaOpcja != -1);
}


void funkcja4();

int main() {
    mainManu();
    return 0;
}