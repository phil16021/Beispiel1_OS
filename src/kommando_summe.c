#include <stdio.h> 
#include <stdlib.h> 

int main(int anzahl, char *worte[])
{
    int i;
    double summe = 0.0;

    for(i=1; i<anzahl; i++)
        summe += atof(worte[i]);

    printf("Summe: %f\n", summe);

    return summe;
} 