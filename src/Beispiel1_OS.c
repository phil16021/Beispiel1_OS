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

void meinLogo();
void AusgebenGesamt(double);

void meinLogo()
{
	printf("****************************************\n");
	printf("** Dieses Programm ist von Triz Maker **\n");
	printf("****************************************\n");
}

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
int main()
{
	meinLogo();
	/* Mehrfacher Aufruf der Funktion */ 
	int anzahlFeld[3] = {2, 7, 3};
	double preisEinzelFeld[3] = {1.45, 0.85, 0.75};
	int index;
	double preisGesamt;
	/* Berechnung und Ausgabe */ 
	printf("Posten Anzahl Preis einzeln Preis gesamt\n");
	for(index = 0; index < 3; index++)
	{
		preisGesamt = anzahlFeld[index] * preisEinzelFeld[index];
		printf("%6d %6d %8.2f Euro %7.2f Euro\n", index+1,
					anzahlFeld[index], preisEinzelFeld[index], preisGesamt);
	}
}
