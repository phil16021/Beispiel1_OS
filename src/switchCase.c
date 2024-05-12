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

    int x = 12, y = 7;
    if(x < 10 && y++ < 10)
        printf("Beide kleiner als 10\n");

    printf("%d\n", y);
    
    if(x < 20 || y++ < 20)
        printf("Beide kleiner als 20\n");

    printf("%d\n", y);


    return 0;
} 