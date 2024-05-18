#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int *erzeugen(int *pg)
{
    int *pb;

    printf("Anzahl der Elemente: ");
    scanf("%d", pg);

    pb = (int *) malloc(*pg * sizeof(int));

    if(pb == NULL) { 
        printf("Speicherfehler\n"); 
        return NULL; 
        }

    return pb;
}

void fuellen(int *pb, int groesse)
{
    int i;
    for(i=0; i<groesse; i++)
    pb[i] = rand() % 1000;
}

void ausgeben(int *pb, int groesse)
{
    int i;
    for(i=0; i<groesse; i++)
    printf("%6d %10d\n", i, pb[i]);
}

int main()
{
    int *pa, groesse;

    srand((unsigned)time(NULL));
    pa = erzeugen(&groesse);

    if(pa == NULL) 
    return 1;
    
    fuellen(pa, groesse);
    ausgeben(pa, groesse);

    free(pa);
    return 0;
} 