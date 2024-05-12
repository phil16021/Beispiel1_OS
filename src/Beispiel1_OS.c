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
		double preisObstFeld[5] = {1.45, 0.85, 2.10, 1.35, 0.55};
		double preisFischFeld[3] = {2.75, 1.65, 3.40};
		/* Ausgabe */ 
		ausgabeFeld(preisObstFeld, 5);
		ausgabeFeld(preisFischFeld, 3);
		return 0;

}
