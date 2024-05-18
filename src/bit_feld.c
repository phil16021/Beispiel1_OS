#include <stdio.h> 
typedef struct multicolorLed
{
    unsigned char startZustand :1;
    unsigned char endeZustand :1;
    unsigned char startFarbe :3;
    unsigned char endeFarbe :3;
} multicolorLed;

enum zustand{ an, aus };
enum farbe{ Hellrot, Rot, Orange, Gelb, Gruen,
                        Blau, Violett, Dunkelviolett };


int main()
{
    multicolorLed x;
    printf("Struktur: %lu Byte\n", sizeof(x));
    x.startZustand = aus;
    x.startFarbe = Gelb;
    x.endeZustand = an;
    x.endeFarbe = Violett;
    printf("Von %d, %d nach %d, %d\n", x.startZustand, x.startFarbe, 
                                        x.endeZustand, x.endeFarbe);
    return 0;
}