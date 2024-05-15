#include <stdio.h> 
#include <string.h> 

int main()
{
    // Scanf gut eingeben - die do-while schleife löscht die restlichen chars weg
    char wort[6], zeichen;
    int i;
    for(i=1; i<=4;i++)
    {
        printf("Bitte ein Wort eingeben: ");
        scanf("%5s", wort);
        printf("%s, %lu Zeichen\n", wort, strlen(wort));
        do 
            zeichen = getchar();
        while (zeichen != '\n' && zeichen != EOF);
    }
    return 0;
} 