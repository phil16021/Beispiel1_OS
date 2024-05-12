#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define ANZAHL 5 

int main()
{
    int i;
    printf("%d\n", RAND_MAX);
    srand((unsigned)time(NULL));

    for(i=1; i<=ANZAHL; i++)
        printf("%d ", rand());
    printf("\n");

    for(i=1; i<=ANZAHL; i++)
        printf("%d ", rand()%6 + 1);
    printf("\n");
    
    return 0;
} 