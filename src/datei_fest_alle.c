#include <stdio.h> 
typedef struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
} artikelTyp;

int main()
{
    artikelTyp artikelFeld[3] = { {2, 1.45, "Apfel"},
                                {4, 0.85, "Birne"}, 
                                {1, 0.95, "Kiwi"} };
    int i;
    FILE *fp;

    fp = fopen("datei_fest.txt", "w");
    if(fp == NULL) { 
        printf("Dateifehler\n"); return 1; 
        }

    for(i = 0; i < 3; i++)
        fprintf(fp, "%6d %8.2f %-15s\n", artikelFeld[i].anzahl,
                                        artikelFeld[i].preis, 
                                        artikelFeld[i].bezeichnung);

                                        
    fclose(fp);
    return 0;
} 