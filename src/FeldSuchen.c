#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include<time.h>

int vergleichen(const void *z1, const void *z2);

void Ones(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = 1;
        }
    }
}

void Zeros(uint32_t* feld, uint32_t zeilen, uint32_t spalten) {
    uint32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = 0;
        }
    }
}

void Random(uint32_t* feld, uint32_t zeilen, uint32_t spalten, uint32_t max) {
    uint32_t i, k;
    srand(time(NULL));

    for(i = 0  ; i < zeilen; i++) {
        for(k = 0; k < spalten; k++) {
            feld[zeilen * i  + k] = rand() % (max+1);
        }
    }
}

void Ausgabe(uint32_t* feld,  uint32_t zeilen, uint32_t spalten) {
    int32_t i, k;
    for(i = 0  ; i < zeilen; i++) {
        printf("|");
        for(k = 0; k < spalten; k++) {
            printf("%3li", (unsigned long)feld[zeilen * i  + k]);
        }
        printf("  |");
        printf("\n");
    }
    printf("\n");
}

int binSuche(uint32_t* feld, uint32_t index, uint32_t element) {
    uint32_t links = 0;
    uint32_t rechts = index - 1;
    uint32_t mitte;
    while(links <= rechts) {
        mitte = (links + rechts) / 2;
        if(feld[mitte] == element) {
            return mitte;
        }
        if(feld[mitte] < element) {
            links = mitte + 1;
        } else {
            rechts = mitte - 1;
        }
    }
    return -1;
}

void SucheElement(uint32_t* feld, uint32_t zeilen, uint32_t spalten, uint32_t element) {
    uint32_t gefunden;
    uint32_t spalte=0, zeile =0;
    qsort(feld, (int)zeilen * spalten, sizeof(uint32_t), vergleichen);

    gefunden = binSuche(feld, zeilen * spalten, element);
    if(gefunden != -1)
    {
        printf("Element %d gefunden an Position %d\n", element, gefunden);
        spalte = gefunden % spalten;
        zeile = gefunden / spalten;
        printf("Zeile: %d, Spalte: %d\n", zeile+1, spalte+1);
        printf("Adresse des Elements: %p\n", &feld[gefunden]);
        printf("Adresse des Felds: %p\n", feld);

    }
    else
    {
        printf("Element %d nicht gefunden\n", element);
    }
}

void LineareSuche(uint32_t *feld, uint32_t spalten, uint32_t zeilen, uint32_t element)
{
    
    uint32_t anzahlElemente, idx = 0, gefunden = -1, spalte = 0, zeile = 0;
    anzahlElemente = zeilen * spalten;
    for(idx = 0; idx < anzahlElemente; idx++)
    {
        if(feld[idx] == element)
        {
            gefunden = idx;
            break;
        }
    }
    if(gefunden != -1)
    {
        printf("Element %d gefunden an Position %d\n", element, gefunden+1);
        spalte = gefunden % spalten;
        zeile = gefunden / spalten;
        printf("Zeile: %d, Spalte: %d\n", zeile+1, spalte+1);
    }
    else
    {
        printf("Element %d nicht gefunden\n", element);
    }
    printf("\n");

}

void BinaereSuche(uint32_t *feld, uint32_t spalten, uint32_t zeilen, uint32_t *element)
{
    
    uint32_t *adresse;
    adresse = (uint32_t *)bsearch(element, feld, spalten*zeilen, sizeof(uint32_t), vergleichen);
    if(adresse == NULL)
        printf("Nicht gefunden\n");
    else 
    {
        printf("Binäre Suche\n");
        printf("Adresse des %d Elements: %p\n", *element,  adresse);
        printf("Adresse des Felds: %p\n", feld);
        printf("Position des Elements: %ld\n", adresse - feld);
    }
    printf("\n");
}



int vergleichen(const void *z1, const void *z2)
{
    return ( *(uint32_t *)z1 > *(uint32_t *)z2 );
    // return *(double *)z1 < *(double *)z2; // absteigend 
}

void ausgabe(int *b, int groesse)
{
int i;
for(i=0; i<groesse; i++)
printf("%d ", b[i]);
printf("\n");
}

int main() {
    uint32_t feld[5][5];
    uint32_t i, gesucht;
    gesucht = 2;
    Ones(&feld[0][0], 5, 5);
    Random(&feld[0][0], 5, 5, 40);
    Ausgabe(&feld[0][0], 5, 5);
    printf("\n");
    BinaereSuche(&feld[0][0], 5, 5, &gesucht);   // geht nicht.. keine Ahnung warum
    LineareSuche(&feld[0][0], 5, 5, 2);
    printf("\n");

    SucheElement(&feld[0][0], 5, 5, 2);
    printf("\n");
    Ausgabe(&feld[0][0], 5, 5);
    printf("\n");

 



    return 0;
}