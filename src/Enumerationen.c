#include <stdio.h> 
enum farbe{ rot, gelb, blau };
enum wochentag{ freitag=5, samstag, sonntag };
enum marke{ fiat=7, peugeot=2, citroen=2, opel };

int main()
{
    enum farbe fahrzeugFarbe;

    fahrzeugFarbe = gelb;
    printf("%d\n", fahrzeugFarbe);

    if(fahrzeugFarbe == gelb)
        printf("gelb\n");

    printf("%d\n", gelb);
    printf("%d\n", sonntag);
    printf("%d\n", opel);

    return 0;
} 