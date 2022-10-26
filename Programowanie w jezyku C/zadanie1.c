#include <stdio.h>

int main() {
int indeks = 12345;
int rokStudiow = 1;
int wybranaOpcja = -1;
printf ("Program w jezyku C wykonany przez studenta o indeksie nr %d na %d roku studiow\n", indeks, rokStudiow);
printf("Menu:\n- opcja 1:\n- opcja 2:\n- opcja 3:\nWybierz opcje:"); 
scanf("%d", &wybranaOpcja);
printf("Wybrano opcje %d", wybranaOpcja); 
}