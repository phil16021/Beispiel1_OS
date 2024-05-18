#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
    int **pa, zeilen, spalten, i, k;

    srand((unsigned)time(NULL));

    printf("Anzahl der Zeilen: ");
    scanf("%d", &zeilen);

    printf("Anzahl der Spalten: ");
    scanf("%d", &spalten);

    /* Stufe 1 */ 
    pa = (int **) malloc(zeilen * sizeof(int *));
    if(pa == NULL) { 
        printf("Speicherfehler"); 
        return 1; 
        }

    /* Stufe 2 */ 
    for(i=0; i<zeilen; i++)
    {
        pa[i] = (int *) malloc(spalten * sizeof(int));
        if(pa[i] == NULL) { 
            printf("Speicherfehler"); 
            return 1; 
            }
    }
    for(i=0; i<zeilen; i++)
    {
        for(k=0; k<spalten; k++)
        {
            pa[i][k] = rand() % 100;
            printf("%10d ", pa[i][k]);
        }
        printf("\n");
    }
    for(i=0; i<zeilen; i++)
        free(pa[i]);
    free(pa);
    return 0;
} 