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
	int anzahl, nummer;
	double preis, summeRechnung;
	/* Startwert */ 
	summeRechnung = 0.0;
	/* Regelmäßige Wiederholung */ 
	for(nummer = 1; nummer < 4; nummer = nummer + 1)
	{
	/* Eingabe */ 
	printf("Artikel %d, Anzahl: ", nummer);
	scanf("%d", &anzahl);
	printf("Artikel %d, Preis in Euro: ", nummer);
	scanf("%lf", &preis);
	/* Berechnung */ 
	summeRechnung = summeRechnung + anzahl * preis;
	}
	/* Ausgabe */ 
	printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);

		

	return EXIT_SUCCESS;
}
