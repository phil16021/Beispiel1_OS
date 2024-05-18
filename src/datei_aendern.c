#include <stdio.h> 
int main()
{
    FILE *fp;
    char zeile[50];

    fp = fopen("textDatei.txt", "w");
    if(fp == NULL)
    {
        printf("Speicherfehler \n");
        return 1;
    }

    fprintf(fp, "%.20f\n", 1.0 / 7.0);
    fclose(fp);

    if(rename("textDatei.txt", "neueDatei.txt"))
    { 
        printf("Kein Umbenennen der Datei\n"); 
        return 1; 
        }

    
    fp = fopen("neueDatei.txt", "r");
    if(fp == NULL)
    {
        printf("Speicherfehler \n");
        return 1;
    }
    fscanf(fp, "%s", zeile);
    fclose(fp);
    printf("%s\n", zeile);

    #if 1
    if(remove("neueDatei.txt"))
    { 
        printf("Kein Loeschen der Datei\n"); 
        return 1; 
        }
    #endif
    return 0;
} 