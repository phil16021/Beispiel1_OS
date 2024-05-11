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
	int32_t anzahlArtikel = 0;
	double preis = 0.0;

	do
	{
		printf("Anzahl eingeben:  ");
		scanf("%d", &anzahlArtikel);
		if(anzahlArtikel < 0)
		{
			printf("Anzahl muss positiv sein\n");
		}
	} while (anzahlArtikel < 0);

	do
	{
		printf("Preis in Euro eingeben: ");
		scanf("%lf", &preis);
		if(preis < 0)
		{
			printf("Preis muss positiv sein\n");
		}
		if (preis > 10)
		{
			printf("Preis muss kleiner als 10 Euro sein\n");
		}
		
	} while (preis < 0 || preis > 10);

	printf("Anzahl: %d\n", anzahlArtikel);
	printf("Preis: %.2lf Euro\n", preis);

	
}
