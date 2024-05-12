/*
 ============================================================================
 Name        : data_disk.c
 Author      : philipp
 Version     :
 Copyright   : Your copyright notice
 Description : write and read Data from Disk
 ============================================================================
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h> 

void meinLogo();

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

void SchreibenStrukturFeld(struct artikelTyp *artFeld, int groesse)
{
	int index;
    FILE *fp;

    /* Datei öffnen zum Schreiben, mit Prüfung */ 
    fp = fopen("datei.txt", "w");
    if(fp == NULL)
    {
        printf("Dateifehler\n");
        return;
    }
	for(index = 0; index < groesse; index++)
	fprintf(fp, "%4d %-15s %8.2f\n", 	artFeld[index].anzahl,
                            artFeld[index].bezeichnung,
							artFeld[index].preis);

    /* Datei schließen */ 
    fclose(fp);
}


int main()
{
    /* Deklaration eines Dateizeigers */ 
    FILE *fp;
    struct artikelTyp artikel[3];

    eingabeStrukturFeld(artikel, 3);
    SchreibenStrukturFeld(artikel, 3);



    /* Datei öffnen zum Lesen, mit Prüfung */ 
    // fp = fopen("datei.txt", "r");
    // if(fp == NULL)
    // {
    //     printf("Dateifehler\n");
    //     return 1;
    // }
    // /* Eine bekannte Menge von double-Werten aus Datei lesen */ 
    // for(index = 0; index < 3; index++)
    //     fscanf(fp, "%lf", &geleseneDaten[index]);
    // /* Gespeicherte Werte ausgeben */ 
    // for(index = 0; index < 3; index++)
    //     printf("%8.2f Euro\n", geleseneDaten[index]);
    // fclose(fp);

    return EXIT_SUCCESS;
} 