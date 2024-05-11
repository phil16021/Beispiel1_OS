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
	int anzahl, nummer, nochEiner;
	double preis, summeRechnung;
	/* Startwerte */ 
	nummer = 1;
	summeRechnung = 0.0;
	/* Bedingte Wiederholung */ 
	do 
	{
	/* Eingabe */ 
	printf("Artikel %d, Anzahl: ", nummer);
	scanf("%d", &anzahl);
	printf("Artikel %d, Preis in Euro: ", nummer);
	scanf("%lf", &preis);
	/* Berechnung */ 
	summeRechnung = summeRechnung + anzahl * preis;
	/* Abfrage */ 
	printf("Noch ein Artikel (Ja=1, Nein=0): ");
	scanf("%d", &nochEiner);
	/* Laufende Nummer erhöhen */ 
	nummer = nummer + 1;
	}
	while(nochEiner == 1);
	/* Ausgabe */ 
	printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);	

	return EXIT_SUCCESS;
}
