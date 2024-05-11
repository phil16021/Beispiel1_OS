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
	/* Startwerte */ 
	int anzahl, nummer, nochEiner;
	double preis, summeRechnung;
	/* Startwerte */ 
	nummer = 0;
	summeRechnung = 0.0;
	/* Abfrage */ 
	printf("Wollen Sie Artikel eingeben (Ja=1, Nein=0): ");
	scanf("%d", &nochEiner);
	/* Bedingte Wiederholung, Prüfung vorher */ 
	while(nochEiner == 1)
	{
	/* Laufende Nummer erhöhen */ 
	nummer = nummer + 1;
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
	}
	/* Ausgabe */ 
	if(nummer == 0)
	printf("Keine Eingabe\n");
	else 
	printf("Summe der Rechnung: %.2f Euro\n", summeRechnung);

	return EXIT_SUCCESS;
}
