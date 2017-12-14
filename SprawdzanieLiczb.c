//Napisz funkcjê, która przyjmuje trzy argumenty liczbowe,
//a nastêpnie sprawdza, czy wszystkie wartoœci s¹ równe.
//Funkcja powinna zwracaæ wartoœæ logiczn¹ prawdy lub fa³szu.
//Napisz program, który zapyta u¿ytkownika o trzy liczby,
//a nastêpnie wywo³a powy¿sz¹ funkcjê, przekazuj¹c wpisane liczby
//jako jej argumenty. Je¿eli funkcja zwróci³a logiczn¹ prawdê,
//wyœwietl s³owo TAK, w przeciwnym razie wyœwietl NIE.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool sprawdzam_liczby(int tablica_liczb[]);

int main(void) {

    int tablica_liczb[3];
    int i = 0;

    for(i = 0 ; i < 3 ; i++) {
        printf("Podaj %d liczbe: ", i+1);
        scanf("%d", &tablica_liczb[i]);
    }

    if(sprawdzam_liczby(tablica_liczb)) printf("TAK");
    else printf("NIE");
    }

bool sprawdzam_liczby(int tablica_liczb[]) {

    if((tablica_liczb[0] == tablica_liczb[1]) && (tablica_liczb[1] == tablica_liczb[2])) return true;
    else return false;

}
