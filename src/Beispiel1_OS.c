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

	/* Eingabe */ 
	for(int i = 0; i < 2; i++) {
		printf("%d. Artikel: ", i+1);
		scanf("%u", anzahlArtikel + i);
		printf("Preis in Euro: ");
		scanf("%lf", preisArtikel + i);
	}
	/* Verarbeitung */
	for(int i = 0; i < 2; i++) {
		summeRechnung += *(anzahlArtikel+i) * *(preisArtikel+i);
	}
	summeRabatt =  summeRechnung * (100 - RABATT) / 100;
	
	/* Ausgabe */ 
	printf("Summe ohne Rabatt: %.2f Euro\n", summeRechnung);
	printf("Summe mit Rabatt: %.2f Euro\n", summeRabatt);

	return EXIT_SUCCESS;
}
