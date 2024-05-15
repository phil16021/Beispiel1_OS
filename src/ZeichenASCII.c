#include <stdio.h> 
#include <string.h>

int main()
{
    char zeichen;
    /* Tabelle */ 
    for(zeichen = 32; zeichen < 127; zeichen++)
    {
        printf("%3d %c ", zeichen, zeichen);
        if(zeichen%8==7)
            printf("\n");
    }
    printf("\n");
    /* Bereich prüfen */ 
    zeichen = 'g';
    if(zeichen >= '0' && zeichen <= '9')
        printf("Ziffer\n");
    else if(zeichen >= 'A' && zeichen <= 'Z')
        printf("Grosser Buchstabe\n");
    else if(zeichen >= 'a' && zeichen <= 'z')
        printf("Kleiner Buchstabe\n");
    else 
        printf("Sonstiges Zeichen\n");
    return 0;
} 