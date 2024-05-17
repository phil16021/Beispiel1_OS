#include <stdio.h> 
#include <string.h> 
struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
};

int main()
{
    FILE *fp;
    struct artikelTyp artikelFeld[3] = { {2, 1.45, "Apfel"},
                                        {4, 1.85, "Mandarine"},
                                         {11, 0.95, "Kiwi"} };
    int i, k;
    char preisText[20];

    fp = fopen("datei_csv.csv", "w");
    if(fp == NULL) { 
        printf("Dateifehler\n"); 
        return 1; 
        }

    for(i=0; i<3; i++)
    {
        sprintf(preisText, "%.2f", artikelFeld[i].preis);
        for(k=0; k<(int)strlen(preisText); k++)
            if(preisText[k] == '.') 
            { 
                preisText[k] = ','; 
                break; 
            }
        fprintf(fp, "%d;", artikelFeld[i].anzahl);
        fprintf(fp, "%s;", artikelFeld[i].bezeichnung);
        fprintf(fp, "%s", preisText);
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
} 