#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
    int *pa, groesse, i;
    srand((unsigned)time(NULL));
    /* Erstes Mal */ 
    printf("Anzahl der Elemente: ");
    scanf("%d", &groesse);

    pa = (int *) malloc(groesse * sizeof(int));
    if(pa == NULL) { 
        printf("Speicherfehler\n"); 
        return 1; 
        }

    for(i=0; i<groesse; i++)
    {
        pa[i] = rand() % 2000 + 1;
        printf("%6d %12d\n", i, pa[i]);
    }
    /* Zweites Mal */ 
    printf("Neue Anzahl der Elemente: ");
    scanf("%d", &groesse);

    pa = (int *) realloc(pa, groesse * sizeof(int));
    if(pa == NULL) { 
        printf("Speicherfehler\n"); 
        return 1; 
        }
    for(i=0; i<groesse; i++)
        printf("%6d %12d\n", i, pa[i]);

    free(pa);

    return 0;
} 