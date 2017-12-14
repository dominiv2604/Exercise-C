//Napisz funkcj�, kt�ra przyjmuje trzy argumenty liczbowe,
//a nast�pnie sprawdza, czy wszystkie warto�ci s� r�wne.
//Funkcja powinna zwraca� warto�� logiczn� prawdy lub fa�szu.
//Napisz program, kt�ry zapyta u�ytkownika o trzy liczby,
//a nast�pnie wywo�a powy�sz� funkcj�, przekazuj�c wpisane liczby
//jako jej argumenty. Je�eli funkcja zwr�ci�a logiczn� prawd�,
//wy�wietl s�owo TAK, w przeciwnym razie wy�wietl NIE.


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
