                                //ZADANIE//
//Napisz program, który pobierze od u¿ytkownika liczby z zakresu <0 - 10>,             //
//a nastêpnie wypisze w osobnych liniach, ile razy ka¿da z tych liczb                  //
//pojawi³a siê na wejœciu. Ka¿da linia ma mieæ nastêpuj¹cy format:                     //
//liczba - iloœæ wyst¹pieñ. Przed i po myœlniku ma siê pojawiæ dok³adnie jedna spacja. //
//Pojawienie siê wartoœci -1 na wejœciu bêdzie oznacza³o zakoñczenie ci¹gu.            //


#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int tablica[2000];
	int tablica_cyferek[10];
	int wprowadzona_liczba;
	int i=0;
	int j=0;

	for(i=0 ; i<=10 ; i++) {
		tablica_cyferek[i] = 0;
	}

	puts("Podaj liczby z zakresu <0:10>, wprowadzenie -1 oznacza koniec tworzenia ciagu.");

	while(1) {
        scanf("%i", &wprowadzona_liczba);
        if(wprowadzona_liczba == -1) break;
        else if(wprowadzona_liczba > 10 || wprowadzona_liczba < 0) puts("Blad - podaj inna liczbe");
        else {
			tablica[i] = wprowadzona_liczba;
			tablica_cyferek[wprowadzona_liczba] = tablica_cyferek[wprowadzona_liczba] + 1;
			i++;
		}
	}

	for(i=0 ; i<10 ; i++){
        printf("\n%d - %d", i, tablica_cyferek[i]);
	}
}
