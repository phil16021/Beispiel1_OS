#include <stdio.h>
#include <stdbool.h>



int main()
{
    int z, *pz;
    bool schalter;
    /* Wahrheitswerte von Zahlen */ 
    z = 5; if(z) printf("%d ist wahr\n", z);
    z = -5; if(z) printf("%d ist wahr\n", z);
    z = 0; if(z) printf("%d ist wahr\n", z);
    else printf("%d ist falsch\n", z);
    /* Wahrheitswerte von Zeigern */ 
    pz = &z; if(pz) printf("Zeiger ist wahr\n");
        else printf("Zeiger ist falsch\n");
    pz = NULL; if(pz) printf("Zeiger ist wahr\n");
        else printf("Zeiger ist falsch\n");
    /* Falscher Vergleichsoperator ! */ 
    if(z = 0)
        printf("z hat den Wert 0\n");
    if(z = 5)
        printf("z hat den Wert 5\n");
    /* Datentyp bool */ 
    printf("%lu Byte\n", sizeof(schalter));
    
    schalter = true;
   
    if(schalter) printf("An\n");
    else printf("Aus\n");
    
    schalter = false;
    if(schalter) printf("An\n");
    else printf("Aus\n");
    
    return 0;
} 