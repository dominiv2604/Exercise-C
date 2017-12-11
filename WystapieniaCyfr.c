                                //ZADANIE//
//Napisz program, który pobierze od użytkownika liczby z zakresu <0 - 10>,             //
//a następnie wypisze w osobnych liniach, ile razy każda z tych liczb                  //
//pojawiła się na wejściu. Każda linia ma mieć następujący format:                     //
//liczba - ilość wystąpień. Przed i po myślniku ma się pojawić dokładnie jedna spacja. //
//Pojawienie się wartości -1 na wejściu będzie oznaczało zakończenie ciągu.            //


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
