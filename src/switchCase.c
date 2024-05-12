#include <stdio.h> 



int main()
{
    int wuerfel = 2;
    char antwort = 'n';
    /* Mehrere Fälle, teilweise zusammengefasst */ 
    switch(wuerfel)
    {
        case 1:
        case 3:
        case 5:
        printf("ungerade\n");
        break;
        case 2:
        case 4:
        case 6:
        printf("gerade\n");
        break;
        default:
        printf("Nicht von 1 bis 6\n");
    }
    /* Mehrere Fälle, alle einzeln */ 
    switch(antwort)
    {
        case 'j':
            printf("Antwort: Ja\n");
        break;
        case 'n':
            printf("Antwort: Nein\n");
        break;
        case 'v':
            printf("Antwort: Vielleicht\n");
    }
    return 0;
} 