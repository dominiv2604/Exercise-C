                            // ZADANIE //

//    Napisz program, który pobierze od użytkownika liczby            //
//(nie więcej niż 1000), a następnie zastosuje na nim filtr           //
//uśredniający - każdy element ciągu wyjściowego ma być               //
//średnią dwóch sąsiadujących elementów ciągu wejściowego.            //
//Program ma wyświetlić wszystkie elementy ciągu wyjściowego          //
//oddzielone spacjami, z dokładnością do dwóch miejsc po przecinku.   //
//Pojawienie się wartości 0 na wejściu będzie oznaczało zakończenie   //
//ciągu.							      //



#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int tablica[1000];
	float tablica_par[500];
	float tablica_srednich[500];
	int i = 0;
	int x = 0;
	int c = 0;
	int wprowadzona_liczba = 0;
	float srednia = 0;

	puts("Podaj nie wiecej niz 1000 liczb. 0 konczy tworzenie ciagu");

	while(1) {
		scanf("%i", &wprowadzona_liczba);
		if(wprowadzona_liczba == 0 || i > 1000) break;
			else {

				tablica[i] = wprowadzona_liczba;
				if(i % 2) {
					if(i == 0) break;
					tablica_par[x] = tablica[i-1] + tablica[i];
					x++;
				}
			i++;
			}
	}

	for(c=0 ; c < x; c++) {
		tablica_srednich[c] = tablica_par[c] / 2;
	}

	for(i=0 ; i<x ; i++) {
		printf("\n\n%.2f ", tablica_srednich[i]);
	}

}


