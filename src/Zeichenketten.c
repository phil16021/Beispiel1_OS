#include <stdio.h> 
#include <string.h> 
int main()
{
    char satz[50] = "Das ist", *adresse;
    strcat(satz, " ein Satz");
    printf("Erweitert: %s\n", satz);
    printf("Anzahl Zeichen: %lu\n", strlen(satz));
    adresse = strstr(satz, "ist");
    if(adresse == NULL)
        printf("'ist' wird nicht gefunden\n");
    else 
        printf("Position der Fundstelle: %ld\n", adresse - satz);
    return 0;
} 