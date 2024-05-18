#include <stdio.h> 
#ifndef AUSGABE 
#define AUSGABE 5 
#endif 

int main()
{
    int i, summe = 0;

    for(i=1; i<=5; i++)
    {
        summe += i;
        #if AUSGABE == 1 
        printf("%d\n", summe);
        #elif AUSGABE == 2 
        printf("%d %d\n", i, summe);
        #elif AUSGABE == 3 
        printf("Zahl: %d, Summe: %d\n", i, summe);
        #else 
        ;
        #endif 
    }
    printf("Summe: %d\n", summe);
    return 0;
} 