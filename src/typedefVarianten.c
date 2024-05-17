#include <stdio.h> 
#include <string.h> 

typedef struct artikelTyp
{
    int anzahl;
    double preis;
    char bezeichnung[30];
} artikelTyp;

typedef struct punktTyp
{
    double x;
    double y;
} punktTyp;

typedef struct linieTyp{
    punktTyp startPunkt, endPunkt;
    char farbe[20];
} linieTyp;

int main()
{
    artikelTyp artikel = {2, 1.45, "Apfel"};
    artikelTyp *artZeiger = &artikel;
    printf("%d %.2f %s\n", artZeiger->anzahl,
                artZeiger->preis, artZeiger->bezeichnung);




    linieTyp ersteLinie = { {1.5, -3.2}, {2.5, 4.2}, "rot" };
    punktTyp neuerPunkt = {2.7, 4.4};
    ersteLinie.startPunkt.x = 1.0;
    ersteLinie.endPunkt = neuerPunkt;
    strcpy(ersteLinie.farbe, "gelb");

    printf("Linie von (%.2f|%.2f) nach (%.2f|%.2f) in %s\n",
                    ersteLinie.startPunkt.x, ersteLinie.startPunkt.y,
                    ersteLinie.endPunkt.x, ersteLinie.endPunkt.y,
                    ersteLinie.farbe);


    return 0;
} 