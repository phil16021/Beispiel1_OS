#include <stdio.h> 
#include <stdlib.h> 

int main(int anzahl, char *worte[])
{
    int ergebnis = atoi(worte[1]);
    
    printf("Ergebnis: %d\n", ergebnis);

    return 0;
} 