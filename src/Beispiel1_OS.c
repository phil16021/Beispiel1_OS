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
	uint32_t anzahlArtikelHelpline[] = {5, 2};	
	double preisArtikelHelpline[] = {2.1, 1.6};
	/* Eingabe */ 
	// for(int i = 0; i < 2; i++) {
	// 	printf("%d. Artikel: ", i+1);
	// 	scanf("%u", anzahlArtikel + i);
	// 	printf("Preis in Euro: ");
	// 	scanf("%lf", preisArtikel + i);
	// }
	anzahlArtikel = anzahlArtikelHelpline;	
	preisArtikel = preisArtikelHelpline;

	/* Verarbeitung */
	for(int i = 0; i < 2; i++) {
		summeRechnung += *(anzahlArtikel+i) * *(preisArtikel+i);
	}
	summeRabatt =  summeRechnung * (100 - RABATT) / 100;
	
	/* Ausgabe */ 
	printf("Summe ohne Rabatt: %.2f Euro\n", summeRechnung);
	printf("Summe mit Rabatt: %.2f Euro\n", summeRabatt);

	/* Bedingte Ausführung eines Blocks von Anweisungen */ 
	if(preis > 0.99)
	{
		printf("Ein teurer Artikel\n");
		printf("Brauchen wir den wirklich?\n");
	}
	/* Bedingte Ausführung einer einzelnen Anweisung */ 
	if(preis < 1.0)
		printf("Ein billiger Artikel\n");

	// Vergleichsbeispiel
	double preisApfel = 1.45, preisBirne = 0.85, preisKiwi = 1.45;
	/* Größer */ 
	if(preisApfel > preisBirne)
	printf("Apfel ist teurer als Birne\n");
	/* Kleiner */ 
	if(preisBirne < preisKiwi)
	printf("Birne ist billiger als Kiwi\n");
	/* Größer oder gleich */ 
	if(preisApfel >= preisKiwi)
	printf("Apfel ist mindestens so teuer wie Kiwi\n");
	/* Kleiner oder gleich */ 
	if(preisBirne <= preisKiwi)
	printf("Birne ist hoechstens so teuer wie Kiwi\n");
	/* Gleich */ 
	if(preisApfel == preisKiwi)
	printf("Apfel und Kiwi haben denselben Preis\n");
	/* Ungleich */ 
	if(preisBirne != preisKiwi)
	printf("Birne und Kiwi haben unterschiedliche Preise\n");

	/* Falls Bedingung zutrifft */ 
	if(preis > 0.99)
		printf("Ein teurer Artikel\n");
	/* Ansonsten, falls also Bedingung nicht zutrifft */ 
	else 
	{
		printf("Ein billiger Artikel\n");
		printf("Den nehmen wir\n");
	}

	double preisBanane = 0.75;
	/* Logisches Und */ 
	if(preisBirne < 1.0 && preisBanane < 1.0)
		printf("Beide Artikel sind billig\n");
	/* Logisches Oder */ 
	if(preisApfel > 0.99 || preisBirne > 0.99)
		printf("Mindestens einer der Artikel ist teuer\n");
	/* Logisches Nicht */ 
	if(!(preisBanane > 0.99))
		printf("Artikel ist nicht teuer\n");
		

	return EXIT_SUCCESS;
}
