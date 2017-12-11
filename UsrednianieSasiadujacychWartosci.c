                            // ZADANIE //

//    Napisz program, który pobierze od u¿ytkownika liczby            //
//(nie wiêcej ni¿ 1000), a nastêpnie zastosuje na nim filtr           //
//uœredniaj¹cy - ka¿dy element ci¹gu wyjœciowego ma byæ               //
//œredni¹ dwóch s¹siaduj¹cych elementów ci¹gu wejœciowego.            //
//Program ma wyœwietliæ wszystkie elementy ci¹gu wyjœciowego          //
//oddzielone spacjami, z dok³adnoœci¹ do dwóch miejsc po przecinku.   //
//Pojawienie siê wartoœci 0 na wejœciu bêdzie oznacza³o zakoñczenie   //
//ci¹gu. Je¿eli nie wyst¹pi ¿aden wyraz w ci¹gu program ma wypisaæ 0. //



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


