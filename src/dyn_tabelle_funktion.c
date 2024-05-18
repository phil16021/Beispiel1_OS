#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int **erzeugen(int *pz, int *ps)
{
    int **pb, i;

    printf("Anzahl der Zeilen: ");
    scanf("%d", pz);
    printf("Anzahl der Spalten: ");
    scanf("%d", ps);

    /* Stufe 1 */ 
    pb = (int **) malloc(*pz * sizeof(int *));
    if(pb == NULL) { 
        printf("Speicherfehler"); 
        return NULL; 
        }
    /* Stufe 2 */ 
    for(i=0; i<*pz; i++)
    {
        pb[i] = (int *) malloc(*ps * sizeof(int));
        if(pb[i] == NULL) { 
            printf("Speicherfehler"); 
            return NULL; 
            }
    }
    return pb;
}

void fuellen(int **pb, int zeilen, int spalten)
{
    int i, k;

    for(i=0; i<zeilen; i++)
        for(k=0; k<spalten; k++)
            pb[i][k] = rand() % 1000;
}

void ausgeben(int **pb, int zeilen, int spalten)
{
    int i, k;

    for(i=0; i<zeilen; i++)
    {
        for(k=0; k<spalten; k++)
            printf("%10d ", pb[i][k]);
        printf("\n");
    }
}

void freigeben(int **pb, int zeilen)
{
    int i;
    for(i=0; i<zeilen; i++)
        free(pb[i]);
    free(pb);
}
int main()
{
    int **pa, zeilen, spalten;

    srand((unsigned)time(NULL));

    pa = erzeugen(&zeilen, &spalten);

    if(pa == NULL) 
        return 1;

    fuellen(pa, zeilen, spalten);
    ausgeben(pa, zeilen, spalten);
    freigeben(pa, zeilen);

    return 0;
} 