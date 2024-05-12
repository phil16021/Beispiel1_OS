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
#include <string.h> 

void meinLogo();
void AusgebenGesamt(double);

void meinLogo()
{
	printf("****************************************\n");
	printf("** Dieses Programm ist von Triz Maker **\n");
	printf("****************************************\n");
}

struct artikelTyp
{
	/* Komponenten der Struktur */ 
	int anzahl;
	double preis;
	char bezeichnung[30];
};

/* Definition einer Funktion */ 
void AusgebenGesamt(double einzelpreis)
{
	double preisGesamt;

	printf("Anzahl  Preis gesamt\n");	
	for(int i = 0; i < 5; i++){
		printf("%6d", i+1);
		preisGesamt = einzelpreis * (i+1);
		printf("%9.2f Euro\n", preisGesamt);
	}
	
}
/* Einfache Ausgabe der Werte eines double-Felds */ 
void ausgabeFeld(double *dFeld, int groesse)
{
	int index;
	for(index = 0; index < groesse; index++)
		printf("Wert %4d: %.2f\n", index+1, dFeld[index]);
		printf("\n");
}

int main()
{
	struct artikelTyp artikel;
	/* Eingabe */ 
	printf("Anzahl eingeben: ");
	scanf("%d", &artikel.anzahl);
	printf("Preis in Euro eingeben: ");
	scanf("%lf", &artikel.preis);
	printf("Bezeichnung eingeben: ");
	scanf("%s", artikel.bezeichnung);
	/* Einfache Ausgabe */ 
	printf("%d %.2f %s\n", artikel.anzahl,
	artikel.preis, artikel.bezeichnung);

	return EXIT_SUCCESS;

}
