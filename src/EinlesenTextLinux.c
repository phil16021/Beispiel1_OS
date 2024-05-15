#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

int main()
{
    char satz[20];
    char zwischen[1000] = "";
    char zeichen;
    int i;
    for(i=1; i<=4; i++)
    {
        printf("Bitte einen Satz eingeben: ");
        if(scanf("%[^\n]", zwischen))
        {
            zwischen[19] = '\0';
            strcpy(satz, zwischen);
        }
        else 
            strcpy(satz, "");
        printf("%s, %lu Zeichen\n", satz, strlen(satz));
        do 
            zeichen = getchar();
        while (zeichen != '\n' && zeichen != EOF);
    }
    return 0;
} 