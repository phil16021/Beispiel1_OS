#include <stdio.h> 
#define DS 32 
typedef struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
} artikelTyp;

void ausgabeAlle(FILE *fp)
{
    artikelTyp artikel;
    fseek(fp, 0, SEEK_SET);
    while(fscanf(fp, "%d%lf%s", &artikel.anzahl,
                &artikel.preis, artikel.bezeichnung) == 3)
    printf("%6d %8.2f %-15s\n", artikel.anzahl,
                        artikel.preis, artikel.bezeichnung);
} 

void ausgabe(FILE *fp)
{
    int nr, anzahlArtikel;
    artikelTyp artikel;

    fseek(fp, 0, SEEK_END);
    anzahlArtikel = (int)ftell(fp) / DS;

    do 
    {
        printf("Nummer (0 bis %d): ", anzahlArtikel - 1);
        scanf("%d", &nr);
    }
    while(nr < 0 || nr > anzahlArtikel - 1);
    
    fseek(fp, nr * DS, SEEK_SET);
    fscanf(fp, "%d%lf%s", &artikel.anzahl,
                        &artikel.preis, artikel.bezeichnung);
    printf("%6d %8.2f %-15s\n", artikel.anzahl,
                        artikel.preis, artikel.bezeichnung);
} 

void eingabe(FILE *fp)
{
    int nr, anzahlArtikel;
    artikelTyp artikel;

    fseek(fp, 0, SEEK_END);
    anzahlArtikel = (int)ftell(fp) / DS;

    do 
    {
        printf("Nummer (0 bis %d): ", anzahlArtikel);
        scanf("%d", &nr);}
    while(nr < 0 || nr > anzahlArtikel);

    printf("Anzahl: ");
    scanf("%d", &artikel.anzahl);
    printf("Preis: ");
    scanf("%lf", &artikel.preis);
    printf("Bezeichnung: ");
    scanf("%s", artikel.bezeichnung);

    fseek(fp, nr * DS, SEEK_SET);
    fprintf(fp, "%6d %8.2f %-15s\n", artikel.anzahl,
                            artikel.preis, artikel.bezeichnung);
} 




int main()
{
    int auswahl;
    FILE *fp;

    fp = fopen("datei_fest.txt", "r+");
    if(fp == NULL) { 
        printf("Dateifehler\n"); 
        return 1; 
        }
    do 
    {
        printf("0=Ende, 1=Alle ausgeben, " 
                "2=DS ausgeben, 3=DS eingeben\n" 
                "Ihre Wahl: ");
        scanf("%d", &auswahl);

        switch(auswahl)
        {
            case 0: break;
            case 1: ausgabeAlle(fp); break;
            case 2: ausgabe(fp); break;
            case 3: eingabe(fp); break;
            default: printf("Nur 0 bis 3 eingeben\n");
        }
    }while(auswahl != 0);

    fclose(fp);
    
    return 0;
} 