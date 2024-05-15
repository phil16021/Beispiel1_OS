#include <stdio.h> 
#include <string.h> 
int main()
{
    char satz[50] = "Das ist", *adresse;
    strcat(satz, " ein Satz");
    printf("Erweitert: %s\n", satz);
    printf("Anzahl Zeichen: %lu\n", strlen(satz));
    adresse = strstr(satz, "wird");
    if(adresse == NULL)
        printf("'wird' wird nicht gefunden\n");
    else 
        printf("Position der Fundstelle: %ld\n", adresse - satz);


    char v1[20] = "Halli", v2[20] = "Hallo",
    v3[20] = "hallo", v4[20] = "hallo ";

    if(strcmp(v1, v2) < 0)
        printf("%s steht vor %s\n", v1, v2);
    else if(strcmp(v1, v2) > 0)
        printf("%s steht hinter %s\n", v1, v2);
    else 
        printf("%s und %s sind gleich\n", v1, v2);
    if(strcmp(v2, v3) < 0)
        printf("%s steht vor %s\n", v2, v3);
    if(strcmp(v3, v4) < 0)
        printf("|%s| steht vor |%s|\n", v3, v4);


    char satz2[] = "Satz, der zerlegt wird", *token;
    token = strtok(satz2, " ,");
    while(token != NULL)
    {
        printf("Teil: %s\n", token);
        token = strtok(NULL, " ");
    }


    return 0;



} 