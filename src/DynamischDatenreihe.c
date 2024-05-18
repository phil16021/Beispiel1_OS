#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
    int *pa, groesse, i;
    srand((unsigned)time(NULL));

    printf("Anzahl der Elemente: ");
    scanf("%d", &groesse);

    pa = (int *) malloc(groesse * sizeof(int));
    if(pa == NULL)
    {
        printf("Speicherfehler\n");
        return 1;
    }
    for(i=0; i<groesse; i++)
        pa[i] = rand() % 20 + 1;

    for(i=0; i<groesse; i++)
        printf("%6d %15d\n", i +1, pa[i]);

    free(pa);
    return 0;
} 