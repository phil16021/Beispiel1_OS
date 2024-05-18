#include <stdio.h> 
#define ANZAHL 5 
#define QUADRAT(x) ( (x) * (x) ) 
#define BETRAG(x) ( (x)>0 ? (x) : -(x) ) 

int main()
{
    int a = 2;
    printf("%d\n\n", ANZAHL);

    printf("%d\n", QUADRAT(4));
    printf("%f\n", QUADRAT(2.5));
    printf("%d\n\n", QUADRAT(4 + a));

    printf("%d\n", BETRAG(-4));
    printf("%f\n", BETRAG(-2.5));
    printf("%d\n\n", 8 - BETRAG(a - 7));

    printf("Zeile %d in Datei %s\n", __LINE__, __FILE__);
    printf("Kompiliert: %s, %s\n", __DATE__, __TIME__);
    
    return 0;
} 