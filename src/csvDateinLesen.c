#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
};

int main()
{
    FILE *fp;
    struct artikelTyp artikelFeld[3];
    int i, k;
    char zeile[100], preisText[20];
    fp = fopen("datei_csv.csv", "r");

    if(fp == NULL) { 
        printf("Dateifehler\n"); 
        return 1; 
        }

    for(i=0; i<3; i++)
    {
        fscanf(fp, "%s", zeile);
        artikelFeld[i].anzahl = atoi(strtok(zeile, ";"));
        strcpy(artikelFeld[i].bezeichnung, strtok(NULL, ";"));
        strcpy(preisText, strtok(NULL, ";"));

        for(k=0; k<(int)strlen(preisText); k++)
            if(preisText[k] == ',') { 
                preisText[k] = '.'; 
                break; 
                }
        artikelFeld[i].preis = atof(preisText);
        printf("%d %s %.2f\n", artikelFeld[i].anzahl,
                                artikelFeld[i].bezeichnung, 
                                artikelFeld[i].preis);
    }

    fclose(fp);

    return 0;
} 