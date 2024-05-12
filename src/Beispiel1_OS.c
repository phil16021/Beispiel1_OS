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

/* Einfache Ausgabe einer Strukturvariablen */ 
void ausgabeStruktur(struct artikelTyp art)
{
	printf("%d %.2f %s\n", art.anzahl,
	art.preis, art.bezeichnung);
}

void eingabeStruktur(struct artikelTyp *artZeiger)
{
	int i = 1;
		printf("Artikel %d, Anzahl: ", i);
		scanf("%d", &(artZeiger->anzahl));
		printf("Artikel %d, Preis: ", i);
		scanf("%lf", &(artZeiger->preis));
		printf("Artikel %d, Bezeichnung: ", i);
		scanf("%s", artZeiger->bezeichnung);
}

void eingabeStrukturFeld(struct artikelTyp *artZeiger, int groesse)
{
	for(int i= 0; i<groesse; i++)
	{
		printf("Artikel %d, Anzahl: ", i+1);
		scanf("%d", &(artZeiger+i)->anzahl);
		printf("Artikel %d, Preis: ", i+1);
		scanf("%lf", &(artZeiger+i)->preis);
		printf("Artikel %d, Bezeichnung: ", i+1);
		scanf("%s", (artZeiger+i)->bezeichnung);
	}
}
/* Zuweisung für eine Strukturvariable */ 
void zuweisungStruktur(struct artikelTyp *artZeiger)
{
	(*artZeiger).anzahl = 1;
	artZeiger->preis = 0.95;
	strcpy(artZeiger->bezeichnung, "Kiwi");
}
/* Einfache Ausgabe eines Felds von Strukturvariablen */ 
void ausgabeStrukturFeld(struct artikelTyp *artFeld, int groesse)
{
	int index;
	for(index = 0; index < groesse; index++)
	printf("%d %.2f %s\n", 	artFeld[index].anzahl,
							artFeld[index].preis, 
							artFeld[index].bezeichnung);
}

double SummierenRechnung(struct artikelTyp *artFeld, int groesse)
{
	double summeRechnung = 0.0;
	for(int i = 0; i < groesse; i++)
		summeRechnung += (artFeld + i)->preis * (artFeld + i)->anzahl;

	return summeRechnung;
}

int main()
{
	/* Deklaration mit Initialisierung */ 
	struct artikelTyp artikelFeld[3] =
	{ {2, 1.45, "Apfel"}, {4, 0.85, "Birne"} };


	/* Ausgabe einer Variablen der Struktur */ 
	// eingabeStruktur(artikelFeld);
	// ausgabeStruktur(artikelFeld[0]);
	/* Zuweisung einer Variablen der Struktur */ 
	eingabeStrukturFeld(artikelFeld, 3);
	/* Ausgabe des Felds von Variablen der Struktur */ 
	printf("\n");
	ausgabeStrukturFeld(artikelFeld, 3);
	printf("Summe: %5.2f", SummierenRechnung(artikelFeld, 3));
	printf("\n");

	return EXIT_SUCCESS;

}
