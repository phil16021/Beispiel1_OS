#include <stdio.h> 
int main()
{
    int a[3] = {2, 7, 3}, *z, i;
    char satz[30] = "Das ist ein Satz";

    printf("Feld: Adresse %p\n", a);
    for(i=0; i<3; i++)
        printf("Element %d: Adresse %p\n", i, &a[i]);
    
    printf("\n");
    z = a;
    z = z + 1;
    printf("Zeiger: Adresse %p, Inhalt %d\n", z, *z);
    /* a = a + 1; */ 
    printf("Feld: Adresse %p, Inhalt %d\n\n", a+1, *(a+1));
    printf("%s\n", satz);
    printf("%s\n\n", satz+4);
    printf("Position im Feld: %ld\n", &a[2] - a);
    printf("Position im Feld: %ld\n", &satz[4] - satz);
    printf("Länge des Feldes: %ld\n", *(&satz+1) - satz);
    return 0;
} 