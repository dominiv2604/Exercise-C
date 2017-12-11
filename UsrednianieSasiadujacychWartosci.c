                            // ZADANIE //

//    Napisz program, kt�ry pobierze od u�ytkownika liczby            //
//(nie wi�cej ni� 1000), a nast�pnie zastosuje na nim filtr           //
//u�redniaj�cy - ka�dy element ci�gu wyj�ciowego ma by�               //
//�redni� dw�ch s�siaduj�cych element�w ci�gu wej�ciowego.            //
//Program ma wy�wietli� wszystkie elementy ci�gu wyj�ciowego          //
//oddzielone spacjami, z dok�adno�ci� do dw�ch miejsc po przecinku.   //
//Pojawienie si� warto�ci 0 na wej�ciu b�dzie oznacza�o zako�czenie   //
//ci�gu. Je�eli nie wyst�pi �aden wyraz w ci�gu program ma wypisa� 0. //



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


