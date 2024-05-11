/*
 ============================================================================
 Name        : Beispiel1_OS.c
 Author      : philipp
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "Beispiel1_OS.h"

int main(void) {
	/* Deklaration, teilweise mit Initialisierung */ 
	uint32_t* anzahlArtikel = (uint32_t*) calloc(2, sizeof(uint32_t));
	double* preisArtikel = (double*) calloc(2, sizeof(double));
	double summeRechnung = 0, summeRabatt = 0;
	double preis = 1.85;

	/* Eingabe */ 
	// for(int i = 0; i < 2; i++) {
	// 	printf("%d. Artikel: ", i+1);
	// 	scanf("%u", anzahlArtikel + i);
	// 	printf("Preis in Euro: ");
	// 	scanf("%lf", preisArtikel + i);
	// }
	*anzahlArtikel = 5;	
	*(anzahlArtikel+1) = 2;
	*preisArtikel = 2.1;
	*(preisArtikel+1) = 1.6;


	/* Verarbeitung */
	for(int i = 0; i < 2; i++) {
		summeRechnung += *(anzahlArtikel+i) * *(preisArtikel+i);
	}
	summeRabatt =  summeRechnung * (100 - RABATT) / 100;
	
	/* Ausgabe */ 
	printf("Summe ohne Rabatt: %.2f Euro\n", summeRechnung);
	printf("Summe mit Rabatt: %.2f Euro\n", summeRabatt);

	free(anzahlArtikel);
	free(preisArtikel);
	/* Bedingte Ausführung eines Blocks von Anweisungen */ 


	uint32_t anzahlEingekaufteArtikel = 0;
	double preisEingekaufteArtikel = 0;

	printf("Anzahl der eingekauften Artikel: ");
	scanf("%u", &anzahlEingekaufteArtikel);
	printf("Preis der eingekauften Artikel: ");
	scanf("%lf", &preisEingekaufteArtikel);

	summeRechnung = anzahlEingekaufteArtikel * preisEingekaufteArtikel;

	if(summeRechnung > 10) {
		printf("Summe mit Rabatt: %.2f Euro\n", summeRechnung * (100 - RABATT) / 100);
	} else {
		printf("Summe ohne Rabatt: %.2f Euro\n", summeRechnung);
	}

		

	return EXIT_SUCCESS;
}
