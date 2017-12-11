#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int tablica[9];
	int pobrana_liczba;
	int i = 0;
	int max = 0;
	int srednia = 0;
	int min = 0;

	printf("Wprowadz 10 liczb\n");

	for(i=0 ; i<10 ; i++) {
		scanf("%i", &pobrana_liczba);
		tablica[i] = pobrana_liczba;
		max = tablica[i];
		min = tablica[i];
	}

	for(i=0 ; i<10 ; i++) {
		srednia = srednia + tablica[i];
	}

	srednia = srednia/10;

	for(i=0 ; i<10 ; i++) {
		if(tablica[i] > max) max = tablica[i];
	}

	for(i=0 ; i<10 ; i++) {
		if(tablica[i] < min) min = tablica[i];
	}

	printf("\nWartosc maksymalna podanych liczb to: %i", max);
	printf("\nWartosc srednia podanych liczb to: %i", srednia);
	printf("\nWartosc minimalna podanych liczb to: %i", min);
}
