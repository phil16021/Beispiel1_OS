#include <stdio.h> 
#define DS 32 

typedef struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
} artikelTyp;

int main()
{
    artikelTyp artikel;
    FILE *fp;

    fp = fopen("datei_fest.txt", "r");
    if(fp == NULL) { 
        printf("Dateifehler\n"); 
        return 1; 
        }

    printf("Position: Byte %ld\n", ftell(fp));
    fseek(fp, 2 * DS, SEEK_SET);
    // fseek(fp, -1 * DS, SEEK_END); 
    printf("Position: Byte %ld\n", ftell(fp));
    fscanf(fp, "%d", &artikel.anzahl);
    fscanf(fp, "%lf", &artikel.preis);
    fscanf(fp, "%s", artikel.bezeichnung);
    printf("%d %.2f %s\n", artikel.anzahl,
                        artikel.preis, 
                        artikel.bezeichnung);
    printf("Position: Byte %ld\n", ftell(fp));

    fclose(fp);



    return 0;
} 